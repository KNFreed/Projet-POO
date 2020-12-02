#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project9 {

	/// <summary>
	/// Summary for Parametres
	/// </summary>
	public ref class Parametres : public System::Windows::Forms::UserControl
	{
	public:
		Parametres(void)
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
		~Parametres()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Parametres
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"Parametres";
			this->Size = System::Drawing::Size(1234, 650);
			this->Load += gcnew System::EventHandler(this, &Parametres::Parametres_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Parametres_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
