#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project9 {

	/// <summary>
	/// Summary for GestionCommandes
	/// </summary>
	public ref class GestionCommandes : public System::Windows::Forms::UserControl
	{
	public:
		GestionCommandes(void)
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
		~GestionCommandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AjoutPers;
	protected:
	private: System::Windows::Forms::Button^ AffichPers;
	private: System::Windows::Forms::Panel^ panel1;

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
			this->AjoutPers = (gcnew System::Windows::Forms::Button());
			this->AffichPers = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->AjoutPers->Location = System::Drawing::Point(617, 0);
			this->AjoutPers->Name = L"AjoutPers";
			this->AjoutPers->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->AjoutPers->Size = System::Drawing::Size(617, 130);
			this->AjoutPers->TabIndex = 1;
			this->AjoutPers->Text = L"Ajouter une commande";
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
			this->AffichPers->Text = L"Affichage les commandes";
			this->AffichPers->UseVisualStyleBackColor = false;
			this->AffichPers->Click += gcnew System::EventHandler(this, &GestionCommandes::AffichPers_Click);
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
			this->panel1->TabIndex = 1;
			// 
			// GestionCommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"GestionCommandes";
			this->Size = System::Drawing::Size(1234, 650);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AffichPers_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
