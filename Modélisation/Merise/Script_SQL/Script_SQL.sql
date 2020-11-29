create table Catalogue_Entreprise
(
    ID_Article       int auto_increment
        primary key,
    Libelle_Article  varchar(20) not null,
    Nature           varchar(20) not null,
    Prix_HT          float       not null,
    Taux_TVA_Produit float       not null
);

create table Client
(
    ID_Client      int auto_increment
        primary key,
    Nom_Client     varchar(20) not null,
    Prenom_Client  varchar(20) not null,
    Date_Naissance date        not null
);

create table Commande
(
    ID_Commande           int auto_increment
        primary key,
    Date_Livraison        date     not null,
    Date_Envoi            date     not null,
    Date_Commande         date     not null,
    CDE_Montant_Total_HT  float    not null,
    CDE_Montant_Total_TVA float    not null,
    CDE_Reduction         float    not null,
    CDE_Montant_Total_TTC float    not null,
    Reference             char(15) not null,
    constraint Commande_AK
        unique (Reference)
);

create table Historique_Tarif_TVA
(
    ID_Histo          int auto_increment
        primary key,
    Date_Debut_Mesure date  not null,
    Date_Fin_Mesure   date  not null,
    Taux_TVA          float not null,
    Prix_UHT          float not null
);

create table Ligne
(
    ID_Ligne   int auto_increment
        primary key,
    Quantite   int not null,
    ID_Article int not null,
    constraint Ligne_Catalogue_Entreprise0_FK
        foreign key (ID_Article) references Catalogue_Entreprise (ID_Article)
);

create table Ligne_Commande
(
    ID_Ligne    int not null
        primary key,
    Quantite    int not null,
    ID_Commande int not null,
    ID_Article  int not null,
    constraint Ligne_Commande_Catalogue_Entreprise2_FK
        foreign key (ID_Article) references Catalogue_Entreprise (ID_Article),
    constraint Ligne_Commande_Commande1_FK
        foreign key (ID_Commande) references Commande (ID_Commande),
    constraint Ligne_Commande_Ligne0_FK
        foreign key (ID_Ligne) references Ligne (ID_Ligne)
);

create table Liste_Historique
(
    ID_Histo   int not null,
    ID_Article int not null,
    primary key (ID_Histo, ID_Article),
    constraint Liste_Historique_Catalogue_Entreprise1_FK
        foreign key (ID_Article) references Catalogue_Entreprise (ID_Article),
    constraint Liste_Historique_Historique_Tarif_TVA0_FK
        foreign key (ID_Histo) references Historique_Tarif_TVA (ID_Histo)
);

create table Mode_Paiement
(
    ID_Mode_Paiement  int auto_increment
        primary key,
    Nom_Mode_Paiement varchar(10) not null
);

create table Paiement
(
    ID_Paiement      int auto_increment
        primary key,
    Libelle_Paiement varchar(20) not null,
    Date_Paiement    date        not null,
    Montant          float       not null,
    Solde_Restant    float       not null,
    ID_Commande      int         not null,
    ID_Mode_Paiement int         not null,
    constraint Paiement_Commande0_FK
        foreign key (ID_Commande) references Commande (ID_Commande),
    constraint Paiement_Mode_Paiement1_FK
        foreign key (ID_Mode_Paiement) references Mode_Paiement (ID_Mode_Paiement)
);

create table Repertoire_Adresse
(
    ID_Adresse  int auto_increment
        primary key,
    Numero      int         not null,
    Rue         varchar(40) not null,
    Code_Postal int         not null,
    Ville       varchar(20) not null,
    Pays        varchar(20) not null
);

create table Definition_Lieu
(
    ID_Lieu_Livraison                  int auto_increment
        primary key,
    Type                               char not null comment 'F pour Facturation ou L pour Livraison',
    ID_Client                          int  not null,
    ID_Client_CPosseder_Lieu_Livraison int  not null,
    ID_Adresse                         int  not null,
    constraint Definition_Lieu_Client0_FK
        foreign key (ID_Client) references Client (ID_Client),
    constraint Definition_Lieu_Client1_FK
        foreign key (ID_Client_CPosseder_Lieu_Livraison) references Client (ID_Client),
    constraint Definition_Lieu_Repertoire_Adresse2_FK
        foreign key (ID_Adresse) references Repertoire_Adresse (ID_Adresse)
);

create table Informations_Entreprise
(
    ID_Entreprise         int auto_increment
        primary key,
    Nom_Entreprise        varchar(20) not null,
    Numero_Service_Client int         not null,
    Logo                  blob        not null,
    ID_Adresse            int         not null,
    constraint Informations_Entreprise_Repertoire_Adresse0_FK
        foreign key (ID_Adresse) references Repertoire_Adresse (ID_Adresse)
);

create table Facture_Vente
(
    ID_Facture                        int auto_increment
        primary key,
    FC_Montant_Total_HT               float not null,
    FC_Montant_Total_TVA              float not null,
    FC_Reduction                      float not null,
    FC_Montant_Total_TTC              float not null,
    ID_Client                         int   not null,
    ID_Lieu_Livraison                 int   not null,
    ID_Lieu_Livraison_Definition_Lieu int   not null,
    ID_Entreprise                     int   not null,
    constraint Facture_Vente_Client0_FK
        foreign key (ID_Client) references Client (ID_Client),
    constraint Facture_Vente_Definition_Lieu1_FK
        foreign key (ID_Lieu_Livraison) references Definition_Lieu (ID_Lieu_Livraison),
    constraint Facture_Vente_Definition_Lieu2_FK
        foreign key (ID_Lieu_Livraison_Definition_Lieu) references Definition_Lieu (ID_Lieu_Livraison),
    constraint Facture_Vente_Informations_Entreprise3_FK
        foreign key (ID_Entreprise) references Informations_Entreprise (ID_Entreprise)
);

create table Facture_Contient
(
    ID_Ligne   int not null,
    ID_Facture int not null,
    primary key (ID_Ligne, ID_Facture),
    constraint Facture_Contient_Facture_Vente1_FK
        foreign key (ID_Facture) references Facture_Vente (ID_Facture),
    constraint Facture_Contient_Ligne_Commande0_FK
        foreign key (ID_Ligne) references Ligne_Commande (ID_Ligne)
);

create table Facture_de_Commande
(
    ID_Commande int not null,
    ID_Facture  int not null,
    primary key (ID_Commande, ID_Facture),
    constraint Facture_de_Commande_Commande0_FK
        foreign key (ID_Commande) references Commande (ID_Commande),
    constraint Facture_de_Commande_Facture_Vente1_FK
        foreign key (ID_Facture) references Facture_Vente (ID_Facture)
);

create table Personnel
(
    ID_Employe     int auto_increment
        primary key,
    Nom_Employe    varchar(20) not null,
    Prenom_Employe varchar(20) not null,
    Date_Embauche  date        not null,
    ID_Superieur   int         null,
    ID_Adresse     int         not null,
    constraint Personnel_Personnel0_FK
        foreign key (ID_Superieur) references Personnel (ID_Employe),
    constraint Personnel_Repertoire_Adresse1_FK
        foreign key (ID_Adresse) references Repertoire_Adresse (ID_Adresse)
);

create table Stock
(
    ID_Stock       int auto_increment
        primary key,
    Couleur        varchar(20) not null,
    Quantite_Stock int         not null,
    Seuil_Reapprov int         not null
);

create table Present_en_Stock
(
    ID_Stock   int not null,
    ID_Article int not null,
    primary key (ID_Stock, ID_Article),
    constraint Present_en_Stock_Catalogue_Entreprise1_FK
        foreign key (ID_Article) references Catalogue_Entreprise (ID_Article),
    constraint Present_en_Stock_Stock0_FK
        foreign key (ID_Stock) references Stock (ID_Stock)
);


