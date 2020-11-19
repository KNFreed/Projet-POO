#------------------------------------------------------------
#        Script MySQL.
#------------------------------------------------------------


#------------------------------------------------------------
# Table: Client
#------------------------------------------------------------

CREATE TABLE Client(
        ID_Client      Int  Auto_increment  NOT NULL ,
        Nom            Varchar (20) NOT NULL ,
        Prenom         Varchar (20) NOT NULL ,
        Date_Naissance Date NOT NULL
	,CONSTRAINT Client_PK PRIMARY KEY (ID_Client)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Repertoire_Adresse
#------------------------------------------------------------

CREATE TABLE Repertoire_Adresse(
        ID_Adresse  Int  Auto_increment  NOT NULL ,
        Numero      Int NOT NULL ,
        Rue         Varchar (20) NOT NULL ,
        Code_Postal Int NOT NULL ,
        Ville       Varchar (20) NOT NULL ,
        Pays        Varchar (20) NOT NULL
	,CONSTRAINT Repertoire_Adresse_PK PRIMARY KEY (ID_Adresse)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Commande
#------------------------------------------------------------

CREATE TABLE Commande(
        ID_Commande    Int  Auto_increment  NOT NULL ,
        Date_Livraison Date NOT NULL ,
        Date_Envoi     Date NOT NULL ,
        Date_Commande  Date NOT NULL ,
        Montant_HT     Float NOT NULL ,
        Montant_TVA    Float NOT NULL ,
        Taux_Reduction Float NOT NULL ,
        Montant_TTC    Float NOT NULL ,
        Reference      Char (15) NOT NULL
	,CONSTRAINT Commande_AK UNIQUE (Reference)
	,CONSTRAINT Commande_PK PRIMARY KEY (ID_Commande)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Mode_Paiement
#------------------------------------------------------------

CREATE TABLE Mode_Paiement(
        ID_Mode_Paiement Int  Auto_increment  NOT NULL ,
        Libelle          Varchar (20) NOT NULL ,
        Date_Paiement    Date NOT NULL ,
        Montant          Float NOT NULL ,
        Solde_Restant    Float NOT NULL ,
        ID_Commande      Int NOT NULL
	,CONSTRAINT Mode_Paiement_PK PRIMARY KEY (ID_Mode_Paiement)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Stock
#------------------------------------------------------------

CREATE TABLE Stock(
        ID_Stock       Int  Auto_increment  NOT NULL ,
        Couleur        Varchar (20) NOT NULL ,
        Quantite_Stock Int NOT NULL ,
        Seuil_Reapprov Int NOT NULL
	,CONSTRAINT Stock_PK PRIMARY KEY (ID_Stock)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Historique_Tarif_TVA
#------------------------------------------------------------

CREATE TABLE Historique_Tarif_TVA(
        ID_Histo          Int  Auto_increment  NOT NULL ,
        Date_Debut_Mesure Date NOT NULL ,
        Date_Fin_Mesure   Date NOT NULL ,
        Taux_TVA          Float NOT NULL ,
        Prix_UHT          Float NOT NULL
	,CONSTRAINT Historique_Tarif_TVA_PK PRIMARY KEY (ID_Histo)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Catalogue_Entreprise
#------------------------------------------------------------

CREATE TABLE Catalogue_Entreprise(
        ID_Article Int  Auto_increment  NOT NULL ,
        Nom        Varchar (20) NOT NULL ,
        Nature     Varchar (20) NOT NULL ,
        Prix_HT    Float NOT NULL ,
        ID_Histo   Int NOT NULL
	,CONSTRAINT Catalogue_Entreprise_PK PRIMARY KEY (ID_Article)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Ligne
#------------------------------------------------------------

CREATE TABLE Ligne(
        ID_Ligne   Int  Auto_increment  NOT NULL ,
        Quantite   Int NOT NULL ,
        ID_Article Int NOT NULL
	,CONSTRAINT Ligne_PK PRIMARY KEY (ID_Ligne)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Ligne_Commande
#------------------------------------------------------------

CREATE TABLE Ligne_Commande(
        ID_Ligne    Int NOT NULL ,
        Quantite    Int NOT NULL ,
        ID_Commande Int NOT NULL ,
        ID_Article  Int NOT NULL
	,CONSTRAINT Ligne_Commande_PK PRIMARY KEY (ID_Ligne)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Lieu_Facturation
#------------------------------------------------------------

CREATE TABLE Lieu_Facturation(
        ID_Lieu_Facturation Int  Auto_increment  NOT NULL ,
        ID_Client           Int NOT NULL ,
        ID_Adresse          Int NOT NULL
	,CONSTRAINT Lieu_Facturation_PK PRIMARY KEY (ID_Lieu_Facturation)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Lieu_Livraison
#------------------------------------------------------------

CREATE TABLE Lieu_Livraison(
        ID_Lieu_Livraison Int  Auto_increment  NOT NULL ,
        ID_Client         Int NOT NULL ,
        ID_Adresse        Int NOT NULL
	,CONSTRAINT Lieu_Livraison_PK PRIMARY KEY (ID_Lieu_Livraison)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Informations_Entreprise
#------------------------------------------------------------

CREATE TABLE Informations_Entreprise(
        ID_Entreprise         Int  Auto_increment  NOT NULL ,
        Nom                   Varchar (20) NOT NULL ,
        Numero_Service_Client Int NOT NULL ,
        Logo                  Blob NOT NULL ,
        ID_Adresse            Int NOT NULL
	,CONSTRAINT Informations_Entreprise_PK PRIMARY KEY (ID_Entreprise)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Facture_Vente
#------------------------------------------------------------

CREATE TABLE Facture_Vente(
        ID_Commande         Int NOT NULL ,
        ID_Facture          Int NOT NULL ,
        Nom_Societe         Varchar (50) NOT NULL ,
        Date_Livraison      Date NOT NULL ,
        Date_Envoi          Date NOT NULL ,
        Date_Commande       Date NOT NULL ,
        Montant_HT          Float NOT NULL ,
        Montant_TVA         Float NOT NULL ,
        Taux_Reduction      Float NOT NULL ,
        Montant_TTC         Float NOT NULL ,
        Reference           Char (15) NOT NULL ,
        ID_Client           Int NOT NULL ,
        ID_Lieu_Facturation Int NOT NULL ,
        ID_Lieu_Livraison   Int NOT NULL ,
        ID_Entreprise       Int NOT NULL
	,CONSTRAINT Facture_Vente_AK UNIQUE (Reference)
	,CONSTRAINT Facture_Vente_PK PRIMARY KEY (ID_Commande,ID_Facture)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Ligne_Facture
#------------------------------------------------------------

CREATE TABLE Ligne_Facture(
        ID_Ligne    Int NOT NULL ,
        Quantite    Int NOT NULL ,
        ID_Commande Int NOT NULL ,
        ID_Facture  Int NOT NULL ,
        ID_Article  Int NOT NULL
	,CONSTRAINT Ligne_Facture_PK PRIMARY KEY (ID_Ligne)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Présent en Stock
#------------------------------------------------------------

CREATE TABLE Present_en_Stock(
        ID_Stock   Int NOT NULL ,
        ID_Article Int NOT NULL
	,CONSTRAINT Present_en_Stock_PK PRIMARY KEY (ID_Stock,ID_Article)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Personnel
#------------------------------------------------------------

CREATE TABLE Personnel(
        ID_Employe           Int  Auto_increment  NOT NULL ,
        Nom                  Varchar (20) NOT NULL ,
        Prenom               Varchar (20) NOT NULL ,
        Date_Embauche        Date NOT NULL ,
        ID_Superieur         Int ,
        ID_Adresse           Int NOT NULL
	,CONSTRAINT Personnel_PK PRIMARY KEY (ID_Employe)
)ENGINE=InnoDB;




ALTER TABLE Mode_Paiement
	ADD CONSTRAINT Mode_Paiement_Commande0_FK
	FOREIGN KEY (ID_Commande)
	REFERENCES Commande(ID_Commande);

ALTER TABLE Catalogue_Entreprise
	ADD CONSTRAINT Catalogue_Entreprise_Historique_Tarif_TVA0_FK
	FOREIGN KEY (ID_Histo)
	REFERENCES Historique_Tarif_TVA(ID_Histo);

ALTER TABLE Ligne
	ADD CONSTRAINT Ligne_Catalogue_Entreprise0_FK
	FOREIGN KEY (ID_Article)
	REFERENCES Catalogue_Entreprise(ID_Article);

ALTER TABLE Ligne_Commande
	ADD CONSTRAINT Ligne_Commande_Ligne0_FK
	FOREIGN KEY (ID_Ligne)
	REFERENCES Ligne(ID_Ligne);

ALTER TABLE Ligne_Commande
	ADD CONSTRAINT Ligne_Commande_Commande1_FK
	FOREIGN KEY (ID_Commande)
	REFERENCES Commande(ID_Commande);

ALTER TABLE Ligne_Commande
	ADD CONSTRAINT Ligne_Commande_Catalogue_Entreprise2_FK
	FOREIGN KEY (ID_Article)
	REFERENCES Catalogue_Entreprise(ID_Article);

ALTER TABLE Lieu_Facturation
	ADD CONSTRAINT Lieu_Facturation_Client0_FK
	FOREIGN KEY (ID_Client)
	REFERENCES Client(ID_Client);

ALTER TABLE Lieu_Facturation
	ADD CONSTRAINT Lieu_Facturation_Repertoire_Adresse1_FK
	FOREIGN KEY (ID_Adresse)
	REFERENCES Repertoire_Adresse(ID_Adresse);

ALTER TABLE Lieu_Livraison
	ADD CONSTRAINT Lieu_Livraison_Client0_FK
	FOREIGN KEY (ID_Client)
	REFERENCES Client(ID_Client);

ALTER TABLE Lieu_Livraison
	ADD CONSTRAINT Lieu_Livraison_Repertoire_Adresse1_FK
	FOREIGN KEY (ID_Adresse)
	REFERENCES Repertoire_Adresse(ID_Adresse);

ALTER TABLE Informations_Entreprise
	ADD CONSTRAINT Informations_Entreprise_Repertoire_Adresse0_FK
	FOREIGN KEY (ID_Adresse)
	REFERENCES Repertoire_Adresse(ID_Adresse);

ALTER TABLE Facture_Vente
	ADD CONSTRAINT Facture_Vente_Commande0_FK
	FOREIGN KEY (ID_Commande)
	REFERENCES Commande(ID_Commande);

ALTER TABLE Facture_Vente
	ADD CONSTRAINT Facture_Vente_Client1_FK
	FOREIGN KEY (ID_Client)
	REFERENCES Client(ID_Client);

ALTER TABLE Facture_Vente
	ADD CONSTRAINT Facture_Vente_Lieu_Facturation2_FK
	FOREIGN KEY (ID_Lieu_Facturation)
	REFERENCES Lieu_Facturation(ID_Lieu_Facturation);

ALTER TABLE Facture_Vente
	ADD CONSTRAINT Facture_Vente_Lieu_Livraison3_FK
	FOREIGN KEY (ID_Lieu_Livraison)
	REFERENCES Lieu_Livraison(ID_Lieu_Livraison);

ALTER TABLE Facture_Vente
	ADD CONSTRAINT Facture_Vente_Informations_Entreprise4_FK
	FOREIGN KEY (ID_Entreprise)
	REFERENCES Informations_Entreprise(ID_Entreprise);

ALTER TABLE Ligne_Facture
	ADD CONSTRAINT Ligne_Facture_Ligne0_FK
	FOREIGN KEY (ID_Ligne)
	REFERENCES Ligne(ID_Ligne);

ALTER TABLE Ligne_Facture
	ADD CONSTRAINT Ligne_Facture_Facture_Vente1_FK
	FOREIGN KEY (ID_Commande,ID_Facture)
	REFERENCES Facture_Vente(ID_Commande,ID_Facture);

ALTER TABLE Ligne_Facture
	ADD CONSTRAINT Ligne_Facture_Catalogue_Entreprise2_FK
	FOREIGN KEY (ID_Article)
	REFERENCES Catalogue_Entreprise(ID_Article);

ALTER TABLE Present_en_Stock
	ADD CONSTRAINT Present_en_Stock_Stock0_FK
	FOREIGN KEY (ID_Stock)
	REFERENCES Stock(ID_Stock);

ALTER TABLE Present_en_Stock
	ADD CONSTRAINT Present_en_Stock_Catalogue_Entreprise1_FK
	FOREIGN KEY (ID_Article)
	REFERENCES Catalogue_Entreprise(ID_Article);

ALTER TABLE Personnel
	ADD CONSTRAINT Personnel_Personnel0_FK
	FOREIGN KEY (ID_Superieur)
	REFERENCES Personnel(ID_Employe);

ALTER TABLE Personnel
	ADD CONSTRAINT Personnel_Repertoire_Adresse1_FK
	FOREIGN KEY (ID_Adresse)
	REFERENCES Repertoire_Adresse(ID_Adresse);
