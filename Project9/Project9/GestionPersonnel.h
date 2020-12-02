#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project9 {

	/// <summary>
	/// Summary for GestionPersonnel
	/// </summary>
	public ref class GestionPersonnel : public System::Windows::Forms::UserControl
	{
	public:
		GestionPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ AjoutPers;

	private: System::Windows::Forms::Button^ AffichPers;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom_Employe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prenom_Employe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date_Embauche;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_Superieur;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_Adresse;
	private: System::Data::DataSet^ dataSet1;












	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->AjoutPers = (gcnew System::Windows::Forms::Button());
			this->AffichPers = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom_Employe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prenom_Employe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date_Embauche = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID_Superieur = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID_Adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->AjoutPers);
			this->panel1->Controls->Add(this->AffichPers);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1234, 130);
			this->panel1->TabIndex = 0;
			// 
			// AjoutPers
			// 
			this->AjoutPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->AjoutPers->FlatAppearance->BorderSize = 0;
			this->AjoutPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AjoutPers->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AjoutPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->AjoutPers->Location = System::Drawing::Point(550, 15);
			this->AjoutPers->Name = L"AjoutPers";
			this->AjoutPers->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->AjoutPers->Size = System::Drawing::Size(617, 130);
			this->AjoutPers->TabIndex = 1;
			this->AjoutPers->Text = L"Ajouter du personnel";
			this->AjoutPers->UseVisualStyleBackColor = false;
			// 
			// AffichPers
			// 
			this->AffichPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->AffichPers->FlatAppearance->BorderSize = 0;
			this->AffichPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AffichPers->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AffichPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->AffichPers->Location = System::Drawing::Point(0, 0);
			this->AffichPers->Name = L"AffichPers";
			this->AffichPers->Size = System::Drawing::Size(617, 130);
			this->AffichPers->TabIndex = 0;
			this->AffichPers->Text = L"Affichage du personnel";
			this->AffichPers->UseVisualStyleBackColor = false;
			this->AffichPers->Click += gcnew System::EventHandler(this, &GestionPersonnel::AffichPers_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Nom_Employe, this->Prenom_Employe, this->Date_Embauche, this->ID_Superieur, this->ID_Adresse
			});
			this->dataGridView1->DataSource = this->dataSet1;
			this->dataGridView1->Location = System::Drawing::Point(23, 186);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(816, 150);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionPersonnel::dataGridView1_CellContentClick_2);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column1->HeaderText = L"ID_Employe";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 114;
			// 
			// Nom_Employe
			// 
			this->Nom_Employe->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Nom_Employe->HeaderText = L"Nom_Employe";
			this->Nom_Employe->Name = L"Nom_Employe";
			this->Nom_Employe->Width = 130;
			// 
			// Prenom_Employe
			// 
			this->Prenom_Employe->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Prenom_Employe->HeaderText = L"Prenom_Employe";
			this->Prenom_Employe->Name = L"Prenom_Employe";
			this->Prenom_Employe->Width = 151;
			// 
			// Date_Embauche
			// 
			this->Date_Embauche->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Date_Embauche->HeaderText = L"Date_Embauche";
			this->Date_Embauche->Name = L"Date_Embauche";
			this->Date_Embauche->Width = 144;
			// 
			// ID_Superieur
			// 
			this->ID_Superieur->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->ID_Superieur->HeaderText = L"ID_Superieur";
			this->ID_Superieur->Name = L"ID_Superieur";
			this->ID_Superieur->Width = 124;
			// 
			// ID_Adresse
			// 
			this->ID_Adresse->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->ID_Adresse->HeaderText = L"ID_Adresse";
			this->ID_Adresse->Name = L"ID_Adresse";
			this->ID_Adresse->Width = 112;
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionPersonnel";
			this->Size = System::Drawing::Size(1234, 650);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AffichPers_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_2(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
