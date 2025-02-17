#pragma once
#include <string.h>
#include <chrono>
#include "FileManager.h"
#include "AlgorythmManager.h"

namespace SteganographyJA {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace std;
	using namespace std::chrono;


	public ref class MyForm : public System::Windows::Forms::Form
	{

	private: AlgorythmManager^ algMan;
	private: System::Windows::Forms::Button^  SaveButton;
	private: System::Windows::Forms::Button^  DeleteDataButton;

	public:

		FileManager^ fileMan;	//definicja klasu FileManager

		//Konstruktor MyForm
		MyForm(void)
		{
			InitializeComponent();
			fileMan = gcnew FileManager();	//Utworzenie obiektu FileManager
			algMan = gcnew AlgorythmManager();

			//Wykrycie wątków
			numericUpDownThreads->Value = Environment::ProcessorCount;	//Wpisanie rekomentowanej liczby wątków do suwaka i na pole tekstowe
			infoTextBox->Text = "Tryb Kodowania\r\nZalecana liczba watkow: " + Environment::ProcessorCount.ToString();
		}

	protected:
		
		//Destruktor klasy MyForm
		~MyForm()
		{
			//Usuniecie dynamicznie zaalokowanej pamieci
			fileMan->deleteData(true, true);
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::RadioButton^  radioButtonDecode;

	private: System::Windows::Forms::RadioButton^  radioButtonEncode;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  InfoLabel1;
	private: System::Windows::Forms::TextBox^  infoTextBox;
	private: System::Windows::Forms::Panel^  panelControl;
	private: System::Windows::Forms::Panel^  panelButtons;

	private: System::Windows::Forms::NumericUpDown^  numericUpDownThreads;
	private: System::Windows::Forms::RadioButton^  radioButtonCPP;
	private: System::Windows::Forms::RadioButton^  radioButtonASM;


	private: System::Windows::Forms::Panel^  panelLogo;
	private: System::Windows::Forms::Label^  MainLabel;
	private: System::Windows::Forms::Button^  PhotoButton;
	private: System::Windows::Forms::Button^  EDButton;



	private: System::Windows::Forms::Button^  TextButton;

	private: System::Windows::Forms::Panel^  panelBottom;
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::TextBox^  TextBox;

	private: System::Windows::Forms::Panel^  panelMain;
	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::GroupBox^  groupBox2;








	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->radioButtonDecode = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonEncode = (gcnew System::Windows::Forms::RadioButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->DeleteDataButton = (gcnew System::Windows::Forms::Button());
			this->InfoLabel1 = (gcnew System::Windows::Forms::Label());
			this->infoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panelControl = (gcnew System::Windows::Forms::Panel());
			this->panelButtons = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonCPP = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonASM = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownThreads = (gcnew System::Windows::Forms::NumericUpDown());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->MainLabel = (gcnew System::Windows::Forms::Label());
			this->PhotoButton = (gcnew System::Windows::Forms::Button());
			this->EDButton = (gcnew System::Windows::Forms::Button());
			this->TextButton = (gcnew System::Windows::Forms::Button());
			this->panelBottom = (gcnew System::Windows::Forms::Panel());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panel7->SuspendLayout();
			this->panelControl->SuspendLayout();
			this->panelButtons->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownThreads))->BeginInit();
			this->panelLogo->SuspendLayout();
			this->panelBottom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->panelMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonDecode
			// 
			this->radioButtonDecode->AutoSize = true;
			this->radioButtonDecode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButtonDecode->Dock = System::Windows::Forms::DockStyle::Left;
			this->radioButtonDecode->Location = System::Drawing::Point(3, 18);
			this->radioButtonDecode->Name = L"radioButtonDecode";
			this->radioButtonDecode->Size = System::Drawing::Size(78, 29);
			this->radioButtonDecode->TabIndex = 24;
			this->radioButtonDecode->Text = L"Decode";
			this->radioButtonDecode->UseVisualStyleBackColor = true;
			this->radioButtonDecode->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::radioButtonDecode_MouseClick);
			// 
			// radioButtonEncode
			// 
			this->radioButtonEncode->AutoSize = true;
			this->radioButtonEncode->Checked = true;
			this->radioButtonEncode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButtonEncode->Dock = System::Windows::Forms::DockStyle::Left;
			this->radioButtonEncode->Location = System::Drawing::Point(81, 18);
			this->radioButtonEncode->Name = L"radioButtonEncode";
			this->radioButtonEncode->Size = System::Drawing::Size(77, 29);
			this->radioButtonEncode->TabIndex = 23;
			this->radioButtonEncode->TabStop = true;
			this->radioButtonEncode->Text = L"Encode";
			this->radioButtonEncode->UseVisualStyleBackColor = true;
			this->radioButtonEncode->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::radioButtonEncode_MouseClick);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->DeleteDataButton);
			this->panel7->Controls->Add(this->InfoLabel1);
			this->panel7->Controls->Add(this->infoTextBox);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel7->Location = System::Drawing::Point(260, 50);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Padding = System::Windows::Forms::Padding(20, 0, 20, 0);
			this->panel7->Size = System::Drawing::Size(534, 177);
			this->panel7->TabIndex = 27;
			// 
			// DeleteDataButton
			// 
			this->DeleteDataButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteDataButton->Location = System::Drawing::Point(383, 5);
			this->DeleteDataButton->Name = L"DeleteDataButton";
			this->DeleteDataButton->Size = System::Drawing::Size(104, 25);
			this->DeleteDataButton->TabIndex = 15;
			this->DeleteDataButton->Text = L"Delete data";
			this->DeleteDataButton->UseVisualStyleBackColor = true;
			this->DeleteDataButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteDataButton_Click);
			// 
			// InfoLabel1
			// 
			this->InfoLabel1->AutoSize = true;
			this->InfoLabel1->BackColor = System::Drawing::Color::Transparent;
			this->InfoLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InfoLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InfoLabel1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->InfoLabel1->Location = System::Drawing::Point(29, 10);
			this->InfoLabel1->Margin = System::Windows::Forms::Padding(0);
			this->InfoLabel1->Name = L"InfoLabel1";
			this->InfoLabel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->InfoLabel1->Size = System::Drawing::Size(151, 20);
			this->InfoLabel1->TabIndex = 22;
			this->InfoLabel1->Text = L"Operation Status";
			// 
			// infoTextBox
			// 
			this->infoTextBox->Location = System::Drawing::Point(30, 36);
			this->infoTextBox->Margin = System::Windows::Forms::Padding(4);
			this->infoTextBox->Multiline = true;
			this->infoTextBox->Name = L"infoTextBox";
			this->infoTextBox->ReadOnly = true;
			this->infoTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->infoTextBox->Size = System::Drawing::Size(457, 126);
			this->infoTextBox->TabIndex = 17;
			// 
			// panelControl
			// 
			this->panelControl->BackColor = System::Drawing::SystemColors::Control;
			this->panelControl->Controls->Add(this->panel7);
			this->panelControl->Controls->Add(this->panelButtons);
			this->panelControl->Controls->Add(this->panelLogo);
			this->panelControl->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelControl->Location = System::Drawing::Point(0, 0);
			this->panelControl->Margin = System::Windows::Forms::Padding(0);
			this->panelControl->Name = L"panelControl";
			this->panelControl->Size = System::Drawing::Size(782, 227);
			this->panelControl->TabIndex = 28;
			// 
			// panelButtons
			// 
			this->panelButtons->Controls->Add(this->groupBox1);
			this->panelButtons->Controls->Add(this->groupBox2);
			this->panelButtons->Controls->Add(this->groupBox3);
			this->panelButtons->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelButtons->Location = System::Drawing::Point(0, 50);
			this->panelButtons->Margin = System::Windows::Forms::Padding(0);
			this->panelButtons->Name = L"panelButtons";
			this->panelButtons->Padding = System::Windows::Forms::Padding(20, 10, 10, 10);
			this->panelButtons->Size = System::Drawing::Size(260, 177);
			this->panelButtons->TabIndex = 26;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonEncode);
			this->groupBox1->Controls->Add(this->radioButtonDecode);
			this->groupBox1->Location = System::Drawing::Point(23, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(224, 50);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1.Mode:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButtonCPP);
			this->groupBox2->Controls->Add(this->radioButtonASM);
			this->groupBox2->Location = System::Drawing::Point(23, 56);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(224, 50);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"2.Algorythm:";
			// 
			// radioButtonCPP
			// 
			this->radioButtonCPP->AutoSize = true;
			this->radioButtonCPP->Checked = true;
			this->radioButtonCPP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButtonCPP->Dock = System::Windows::Forms::DockStyle::Left;
			this->radioButtonCPP->Location = System::Drawing::Point(61, 18);
			this->radioButtonCPP->Margin = System::Windows::Forms::Padding(0);
			this->radioButtonCPP->Name = L"radioButtonCPP";
			this->radioButtonCPP->Size = System::Drawing::Size(54, 29);
			this->radioButtonCPP->TabIndex = 7;
			this->radioButtonCPP->TabStop = true;
			this->radioButtonCPP->Text = L"C++";
			this->radioButtonCPP->UseVisualStyleBackColor = true;
			// 
			// radioButtonASM
			// 
			this->radioButtonASM->AutoSize = true;
			this->radioButtonASM->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButtonASM->Dock = System::Windows::Forms::DockStyle::Left;
			this->radioButtonASM->Location = System::Drawing::Point(3, 18);
			this->radioButtonASM->Margin = System::Windows::Forms::Padding(0);
			this->radioButtonASM->Name = L"radioButtonASM";
			this->radioButtonASM->Size = System::Drawing::Size(58, 29);
			this->radioButtonASM->TabIndex = 6;
			this->radioButtonASM->Text = L"ASM";
			this->radioButtonASM->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDownThreads);
			this->groupBox3->Location = System::Drawing::Point(23, 112);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(224, 50);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"3.Threads:";
			// 
			// numericUpDownThreads
			// 
			this->numericUpDownThreads->Location = System::Drawing::Point(8, 22);
			this->numericUpDownThreads->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownThreads->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 64, 0, 0, 0 });
			this->numericUpDownThreads->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownThreads->Name = L"numericUpDownThreads";
			this->numericUpDownThreads->ReadOnly = true;
			this->numericUpDownThreads->Size = System::Drawing::Size(95, 22);
			this->numericUpDownThreads->TabIndex = 5;
			this->numericUpDownThreads->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// panelLogo
			// 
			this->panelLogo->Controls->Add(this->MainLabel);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Margin = System::Windows::Forms::Padding(0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(782, 50);
			this->panelLogo->TabIndex = 25;
			// 
			// MainLabel
			// 
			this->MainLabel->AutoSize = true;
			this->MainLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->MainLabel->Location = System::Drawing::Point(18, 9);
			this->MainLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MainLabel->Name = L"MainLabel";
			this->MainLabel->Size = System::Drawing::Size(249, 32);
			this->MainLabel->TabIndex = 14;
			this->MainLabel->Text = L"BMP Stegonography";
			// 
			// PhotoButton
			// 
			this->PhotoButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PhotoButton->Location = System::Drawing::Point(15, 10);
			this->PhotoButton->Margin = System::Windows::Forms::Padding(4);
			this->PhotoButton->Name = L"PhotoButton";
			this->PhotoButton->Size = System::Drawing::Size(130, 30);
			this->PhotoButton->TabIndex = 0;
			this->PhotoButton->Text = L"Open photo file";
			this->PhotoButton->UseVisualStyleBackColor = true;
			this->PhotoButton->Click += gcnew System::EventHandler(this, &MyForm::PhotoButton_Click);
			// 
			// EDButton
			// 
			this->EDButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EDButton->Enabled = false;
			this->EDButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EDButton->ForeColor = System::Drawing::Color::Green;
			this->EDButton->Location = System::Drawing::Point(639, 6);
			this->EDButton->Margin = System::Windows::Forms::Padding(4);
			this->EDButton->Name = L"EDButton";
			this->EDButton->Size = System::Drawing::Size(130, 37);
			this->EDButton->TabIndex = 12;
			this->EDButton->Text = L"Encrypting";
			this->EDButton->UseVisualStyleBackColor = true;
			this->EDButton->Click += gcnew System::EventHandler(this, &MyForm::EDButton_Click);
			// 
			// TextButton
			// 
			this->TextButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TextButton->Enabled = false;
			this->TextButton->Location = System::Drawing::Point(153, 10);
			this->TextButton->Margin = System::Windows::Forms::Padding(4);
			this->TextButton->Name = L"TextButton";
			this->TextButton->Size = System::Drawing::Size(130, 30);
			this->TextButton->TabIndex = 13;
			this->TextButton->Text = L"Open text file";
			this->TextButton->UseVisualStyleBackColor = true;
			this->TextButton->Click += gcnew System::EventHandler(this, &MyForm::TextButton_Click);
			// 
			// panelBottom
			// 
			this->panelBottom->Controls->Add(this->SaveButton);
			this->panelBottom->Controls->Add(this->PhotoButton);
			this->panelBottom->Controls->Add(this->EDButton);
			this->panelBottom->Controls->Add(this->TextButton);
			this->panelBottom->Location = System::Drawing::Point(0, 603);
			this->panelBottom->Name = L"panelBottom";
			this->panelBottom->Size = System::Drawing::Size(782, 50);
			this->panelBottom->TabIndex = 30;
			// 
			// SaveButton
			// 
			this->SaveButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SaveButton->Enabled = false;
			this->SaveButton->Location = System::Drawing::Point(293, 10);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(130, 30);
			this->SaveButton->TabIndex = 14;
			this->SaveButton->Text = L"Save Encrypt";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &MyForm::SaveButton_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.ErrorImage")));
			this->pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.Image")));
			this->pictureBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.InitialImage")));
			this->pictureBox->Location = System::Drawing::Point(28, 22);
			this->pictureBox->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(340, 334);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox->TabIndex = 3;
			this->pictureBox->TabStop = false;
			this->pictureBox->WaitOnLoad = true;
			// 
			// TextBox
			// 
			this->TextBox->AllowDrop = true;
			this->TextBox->Location = System::Drawing::Point(413, 22);
			this->TextBox->Margin = System::Windows::Forms::Padding(4);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->ReadOnly = true;
			this->TextBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->TextBox->Size = System::Drawing::Size(340, 334);
			this->TextBox->TabIndex = 2;
			// 
			// panelMain
			// 
			this->panelMain->BackColor = System::Drawing::Color::LightGray;
			this->panelMain->Controls->Add(this->pictureBox);
			this->panelMain->Controls->Add(this->TextBox);
			this->panelMain->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->panelMain->Location = System::Drawing::Point(0, 227);
			this->panelMain->Margin = System::Windows::Forms::Padding(0);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Padding = System::Windows::Forms::Padding(15);
			this->panelMain->Size = System::Drawing::Size(782, 373);
			this->panelMain->TabIndex = 29;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 653);
			this->Controls->Add(this->panelControl);
			this->Controls->Add(this->panelBottom);
			this->Controls->Add(this->panelMain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Steganography JA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panelControl->ResumeLayout(false);
			this->panelButtons->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownThreads))->EndInit();
			this->panelLogo->ResumeLayout(false);
			this->panelLogo->PerformLayout();
			this->panelBottom->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->panelMain->ResumeLayout(false);
			this->panelMain->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

//Aktywacja procedur po wciśnięciu przycisku wyboru zdjęcia
private: System::Void PhotoButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ filePath = fileMan->readFile(sender, e, true);	//Wybór i odczyt zdjęcia .bmp
	//Zarządzanie błedami i wyznaczanie stosownego komunikatu
	if (filePath->CompareTo("Error1") == 0) { return; }
	else if (filePath->CompareTo("Error2") == 0) infoTextBox->Text += "\r\nNie mozna otworzyc pliku!";
	else if (filePath->CompareTo("Error3") == 0) infoTextBox->Text += "\r\nWybrany plik zdjecia jest za duzy lub uszkodzony!";
	else 
	{
		//Wyjątek zabezpieczjący przed uszkodzonymi zdjęciami
		try
		{
			pictureBox->ImageLocation = filePath;	//Wyświetlanie zdjęcia
		}
		catch(Exception^)	//Gdy zdjęcie jest uszkodzone, wypisz komunikat oraz wyczyść pole w gui
		{
			pictureBox->ImageLocation = "NoPhoto.png";
			fileMan->deleteData(true, false);
			infoTextBox->Text += "\r\nWybrany plik zdjecia jest za duzy lub uszkodzony!";
			return;
		}

		if (radioButtonDecode->Checked) EDButton->Enabled = true;	//Odblokowanie przycisku na dekodowanie gdy Decode
		else TextButton->Enabled = true;	//Odblokowanie przycisku na wybór tekstu gdy tryb Encode

		infoTextBox->Text += "\r\nPlik zdjecia zostal zaladowany poprawnie.";	//Komunikat w polu powiadomień
		return;
	}
	pictureBox->ImageLocation = "NoPhoto.png"; //Wyczyszczenie okna w przypadku błędu
}


//Aktywacja procedur po wciśnięciu przycisku wyboru tekstu
private: System::Void TextButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ filePath = fileMan->readFile(sender, e, false);	//Wybór i odczyt pliku tekstowego .txt
	//Zarządzanie błedami i wyznaczanie stosownego komunikatu
	if (filePath->CompareTo("Error1") == 0) { return; }
	else if (filePath->CompareTo("Error2") == 0) infoTextBox->Text += "\r\nNie mozna otworzyc pliku!";
	else if (filePath->CompareTo("Error3") == 0) infoTextBox->Text += "\r\nWybrany plik tekstu nie miesci sie w podanym zdjeciu!";
	else if (filePath->CompareTo("Error4") == 0) infoTextBox->Text += "\r\nWybrany plik tekstowy jest pusty!";
	else
	{
		TextBox->Text = File::ReadAllText(filePath);	//Wyświetlanie tekstu
		EDButton->Enabled = true;	//Odblokowanie przycisku na zakodowanie/odkodowanie
		infoTextBox->Text += "\r\nPlik tekstu zostal zaladowany poprawnie.";	//Komunikat w polu powiadomień
		return;
	}
	TextBox->Clear(); //Wyczyszczenie okna w przypadku błędu
}


//Aktywacja procedur po wciśnięciu przycisku kodowania/odkodowywania
private: System::Void EDButton_Click(System::Object^  sender, System::EventArgs^  e) 
{

	if (radioButtonASM->Checked)
	{
		if (!checkMMXCapability())
		{
			MessageBox::Show("Twoj procesor nie posiada CPUID lub MMX dlatego nie mozesz uzyc trybu ASM!\n\n Zmien algorytm lub procesor i wroc ponownie ;D", "ASM error!");
			return;
		}
	}

	bool decode = true;
	//W trybie dekodu odczytaj długość tesktu, w trybie dekodu zapisz długość tekstu
	if (radioButtonDecode->Checked)
		fileMan->decodeTextLength();
	else
	{
		fileMan->encodeTextLength();
		decode = false;
	}

	int loopCounter = fileMan->getTxtLength(); //Ilość obrotów pętli programu
	infoTextBox->Text = "Rozpoczecie operacji\r\nLiczba znakow do przetworzenia " + loopCounter;
	infoTextBox->Refresh();
	int threadCounter = 0;	//Licznik wątków
	int threadMax = Decimal::ToInt32(numericUpDownThreads->Value);	//Ilość wątków wybrana przez użytkownika
	Generic::List<Thread^>^ threadList = gcnew Generic::List<Thread^>();	//Lista do przechowywania aktualnie obsługiwanych wątków

	//Zmniejszenie liczby wątków w sytuacji wystąpienia krótkiego tekstu
	if (loopCounter < threadMax)
		threadMax = loopCounter;
	
	//Rozpoczęcie zegara do zliczania czasu wykonania
	auto start = high_resolution_clock::now();

	//Wywoływanie wątku dla każdej litery
	for (int i = 0; i < loopCounter; i++)
	{
		// Sprawdenie przycisku radio
		if (decode)
		{
			// Obsługa wątków
			if (threadCounter < threadMax)
			{
				//Dodanie wątku do listy std
				threadList->Add(gcnew Thread(gcnew ParameterizedThreadStart(algMan, &AlgorythmManager::operateDecode)));
				//Spakowanie parametrów do jednej krotki ponieważ wątki przyjmują jeden parametr
				Tuple<FileManager^, bool, int>^ parameter = gcnew Tuple<FileManager^, bool, int>
					(fileMan, radioButtonCPP->Checked, i+3);

				threadList[threadCounter]->Start(parameter);	//Dodanie parametru i wystartowanie wątku
				threadCounter++;	//Zwiększenie liczby aktualnie wykonywanych wątków
			}
			else
			{
				bool found = false;
				while (!found)	//Oczekiwanie na wolny wątek do przejęcia
				{
					for (int j = 0; j < threadMax; j++)	//Pętla krążąca po wątkach do momentu znalezienie wolnego 
					{
						if (!threadList[j]->IsAlive)	//Sprawdzenie czy wątek jest wolmy
						{
							found = true;
							//Utworzenie nowego wątku na wolnym miejscu
							threadList[j] = gcnew Thread(gcnew ParameterizedThreadStart(algMan, &AlgorythmManager::operateDecode));
							//Spakowanie parametrów do jednej krotki ponieważ wątki przyjmują jeden parametr
							Tuple<FileManager^, bool, int>^ parameter = gcnew Tuple<FileManager^, bool, int>
								(fileMan, radioButtonCPP->Checked, i+3);

							threadList[j]->Start(parameter);	//Dodanie parametru i wystartowanie wątku

						}
						if (found) break;
					}
				}
			}
		}
		else
		{
			// Obsługa wątków
			if (threadCounter < threadMax)
			{
				//Dodanie wątku do listy std
				threadList->Add(gcnew Thread(gcnew ParameterizedThreadStart(algMan, &AlgorythmManager::operateEncode)));
				//Spakowanie parametrów do jednej krotki ponieważ wątki przyjmują jeden parametr
				Tuple<FileManager^, bool, int>^ parameter = gcnew Tuple<FileManager^, bool, int>
					(fileMan, radioButtonCPP->Checked, i+3);
				
				threadList[threadCounter]->Start(parameter);	//Dodanie parametru i wystartowanie wątku
				threadCounter++;	//Zwiększenie liczby aktualnie wykonywanych wątków
			}
			else
			{
				bool found = false;
				while (!found)	//Oczekiwanie na wolny wątek do przejęcia
				{
					for (int j = 0; j < threadMax; j++)	//Pętla krążąca po wątkach do momentu znalezienie wolnego 
					{
						if (!threadList[j]->IsAlive)	//Sprawdzenie czy wątek jest wolmy
						{
							found = true;
							//Utworzenie nowego wątku na wolnym miejscu
							threadList[j] = gcnew Thread(gcnew ParameterizedThreadStart(algMan, &AlgorythmManager::operateEncode));
							//Spakowanie parametrów do jednej krotki ponieważ wątki przyjmują jeden parametr
							Tuple<FileManager^, bool, int>^ parameter = gcnew Tuple<FileManager^, bool, int>
								(fileMan, radioButtonCPP->Checked, i+3);

							threadList[j]->Start(parameter);	//Dodanie parametru i wystartowanie wątku
						}
						if (found) break;
					}
				}
			}
		}
	}

	//Pętla zarząda aktywacją bierzącą aktywacją wątków
	for (int i = 0; i < threadList->Count; i++)
	{
		threadList[i]->Join();
	}

	if (decode) TextBox->Text = msclr::interop::marshal_as<String^>(fileMan->getText());
	auto stop = high_resolution_clock::now();	//Zatrzymanie zegara zliczającego czas wykonania
	auto duration = duration_cast<microseconds>(stop - start);
	String^ timePassed = gcnew String(to_string(duration.count()).c_str());
	infoTextBox->Text = "Ilosc znakow: " + loopCounter + "\r\nWykonano w: " + timePassed;	//Zapis czasu wykonania na okno powiadomień oraz pop-upa
	MessageBox::Show("Operacje wykonano pomyslnie!\nLiczba watkow: " + threadMax.ToString() + "\nCzas: " + timePassed->ToString() + "ms");
	SaveButton->Enabled = true;	//Odblokowanie przycisku na zapis
}


//Zarządzanie przyciskiem zapisu pliku .bmp lub .txt
private: System::Void SaveButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Zapis do .bmp
	if (radioButtonEncode->Checked)
	{
		String^ filePath = fileMan->saveFile(sender, e, true);	//Zapis pliku .bmp do wybranego przez usera katalogu
		
		//Zarządzanie błedami i wyznaczanie stosownego komunikatu
		if (filePath->CompareTo("Error1") == 0) { return; }
		else if (filePath->CompareTo("Error2") == 0) infoTextBox->Text += "\r\nNie mozna otworzyc pliku!";
		else
		{
			fileMan->deleteData(true, true);
			TextBox->Clear();
			pictureBox->ImageLocation = "NoPhoto.png";
			EDButton->Enabled = false;
			SaveButton->Enabled = false;
			TextButton->Enabled = false;
			infoTextBox->Text = "Plik zdjecia zostal poprawnie wygenerowany pod sciezka:\r\n" + filePath;
			MessageBox::Show("Zaszyfrowane zdjecie zostalo zapisane pod sciezka: " + filePath + "\r\n\r\nInterface programu zostal wyczyszczony!");
		}
	}
	else
	{
		String^ filePath = fileMan->saveFile(sender, e, false);	//Zapis pliku .txt do wybranego przez usera katalogu

		//Zarządzanie błedami i wyznaczanie stosownego komunikatu
		if (filePath->CompareTo("Error1") == 0) { return; }
		else if (filePath->CompareTo("Error2") == 0) infoTextBox->Text += "\r\nNie mozna otworzyc pliku!";
		else
		{
			fileMan->deleteData(true, true);
			TextBox->Clear();
			pictureBox->ImageLocation = "NoPhoto.png";
			EDButton->Enabled = false;
			SaveButton->Enabled = false;
			TextButton->Enabled = false;
			infoTextBox->Text = "Plik tekstowy zostal poprawnie wygenerowany pod sciezka:\r\n" + filePath;
			MessageBox::Show("Zaszyfrowany tekst zostal zapisany pod sciezka: " + filePath + "\r\n\r\nInterface programu zostal wyczyszczony!");
		}
	}
}


//Zarządzanie zmianami w gui i rezerwacji pamięci po kliknięciu Encode Button
private: System::Void radioButtonEncode_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	EDButton->Text = "Encrypting";
	//Gdy nie ma ani zdjęcia, ani tekstu
	if ((fileMan->getBmpData() == nullptr) && (fileMan->getText()) == nullptr)
	{
		EDButton->Enabled = false;	//Wyłączenie przycisku enkrypcji
		TextButton->Enabled = false;
	}
	//Gdy jest zdjęcie, ale nie ma tekstu
	else if ((fileMan->getText() == nullptr) && (fileMan->getBmpData() != nullptr))
	{
		EDButton->Enabled = false;	//Wyłączenie przycisku enkrypcji
		TextButton->Enabled = true;
	}
	//Gdy jest zarówno zdjęcie, jak i tekst
	else if ((fileMan->getText() != nullptr) && (fileMan->getBmpData() != nullptr))
	{
		EDButton->Enabled = true;
		TextButton->Enabled = false;
	}

	SaveButton->Enabled = false;
	infoTextBox->Text = "Tryb Kodowania";
}


//Zarządzanie zmianami w gui i rezerwacji pamięci po kliknięciu Decode Button
private: System::Void radioButtonDecode_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	if (fileMan->getBmpData() == nullptr) EDButton->Enabled = false;	//Wyłączenie przycisku enkrypcji
	else EDButton->Enabled = true;

	EDButton->Text = "Decrypting";	//Zmiana napisu na przycisku

	TextBox->Clear();	//Czyszczenie obszaru z tekstem
	TextButton->Enabled = false; //Wyłączenie przycisku z tekstem
	fileMan->deleteData(false, true);	//Wyczyszczenie zaalokowanej pamieci na tekst

	SaveButton->Enabled = false;
	infoTextBox->Text = "Tryb Dekodowania\r\nObszar pliku tesktowego zostal wyczyszczony!";
}


//Resetowanie pamięci programu
private: System::Void DeleteDataButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	fileMan->deleteData(true, true);
	TextBox->Clear();
	pictureBox->ImageLocation = "NoPhoto.png";
	EDButton->Enabled = false;
	SaveButton->Enabled = false;
	TextButton->Enabled = false;
	MessageBox::Show("Interface programu zostal wyczyszczony!");
}

};
}
