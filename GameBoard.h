#pragma once

namespace Arcanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o GameBoard
	/// </summary>
	public ref class GameBoard : public System::Windows::Forms::Form
	{
	private:
		int x = 0, y = 0, lives = 3, score = 0, blocksCount = 0;
		char direction;
		bool block = false;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ picEnd;

	private: System::Windows::Forms::PictureBox^ picAgain;
	private: System::Windows::Forms::PictureBox^ picLoose;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public:
		GameBoard(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~GameBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameBoard::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picEnd = (gcnew System::Windows::Forms::PictureBox());
			this->picAgain = (gcnew System::Windows::Forms::PictureBox());
			this->picLoose = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEnd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAgain))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLoose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(332, 445);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &GameBoard::Timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(278, 469);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(133, 28);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(530, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(661, 26);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"3";
			// 
			// picEnd
			// 
			this->picEnd->BackColor = System::Drawing::Color::Transparent;
			this->picEnd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picEnd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picEnd.Image")));
			this->picEnd->Location = System::Drawing::Point(248, 353);
			this->picEnd->Name = L"picEnd";
			this->picEnd->Size = System::Drawing::Size(199, 85);
			this->picEnd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picEnd->TabIndex = 4;
			this->picEnd->TabStop = false;
			this->picEnd->Visible = false;
			this->picEnd->Click += gcnew System::EventHandler(this, &GameBoard::PicEnd_Click);
			// 
			// picAgain
			// 
			this->picAgain->BackColor = System::Drawing::Color::Transparent;
			this->picAgain->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picAgain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picAgain.Image")));
			this->picAgain->Location = System::Drawing::Point(43, 352);
			this->picAgain->Name = L"picAgain";
			this->picAgain->Size = System::Drawing::Size(199, 86);
			this->picAgain->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picAgain->TabIndex = 5;
			this->picAgain->TabStop = false;
			this->picAgain->Visible = false;
			this->picAgain->Click += gcnew System::EventHandler(this, &GameBoard::PicAgain_Click);
			// 
			// picLoose
			// 
			this->picLoose->BackColor = System::Drawing::Color::Transparent;
			this->picLoose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picLoose.Image")));
			this->picLoose->Location = System::Drawing::Point(453, 301);
			this->picLoose->Name = L"picLoose";
			this->picLoose->Size = System::Drawing::Size(251, 200);
			this->picLoose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picLoose->TabIndex = 6;
			this->picLoose->TabStop = false;
			this->picLoose->Visible = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"blok_czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"blok_metal.png");
			this->imageList1->Images->SetKeyName(2, L"blok_metal_rozbity.png");
			this->imageList1->Images->SetKeyName(3, L"blok_niebieski.png");
			this->imageList1->Images->SetKeyName(4, L"blok_zielony.png");
			this->imageList1->Images->SetKeyName(5, L"blok_zolty.png");
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 211);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"Block";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(12, 127);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"Block";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(12, 169);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"Block";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(12, 85);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(76, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"BlockMetal";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(12, 253);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(76, 36);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"Block";
			// 
			// GameBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(704, 501);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->picLoose);
			this->Controls->Add(this->picAgain);
			this->Controls->Add(this->picEnd);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"GameBoard";
			this->Text = L"Arcanoid";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameBoard::moveOnBoard);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &GameBoard::stopBoard);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEnd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAgain))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLoose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		for each (Control ^ element in this->Controls) {
			if (element->Tag == "Block" || element->Tag == "BlockMetal" || element->Tag == "ct") this->destroyBlock(element);
		}
		
		// ruch pi³ki
		this->pictureBox1->Left += this->x;
		this->pictureBox1->Top += this->y;

		// od prawej
		if (this->pictureBox1->Left >= GameBoard::Width - this->pictureBox1->Width) this->x = -this->x;
		// od lewej
		if (this->pictureBox1->Left <= 5 - this->pictureBox1->Width) this->x = -this->x;
		// od dolu
		//if (this->pictureBox1->Top >= GameBoard::Height - this->pictureBox1->Height) this->y = -this->y;
		//od gory
		if (this->pictureBox1->Top <= 75 - this->pictureBox1->Height) this->y = -this->y;
		
		// paletka w prawo
		if ((this->direction == 'r') && (this->pictureBox2->Left <= GameBoard::Width - this->pictureBox2->Width - 20)) {
			this->pictureBox2->Left += 10;
			if (this->x == 0 && this->y ==0) this->pictureBox1->Left += 10;
		}
		if ((this->direction == 'l') && (this->pictureBox2->Left >= 0)) {
			this->pictureBox2->Left -= 10;
			if (this->x == 0 && this->y == 0) this->pictureBox1->Left -= 10;
		}
		// odbicie od paletki
		if (
			(this->pictureBox1->Left > this->pictureBox2->Left) &&
			(this->pictureBox1->Left < this->pictureBox2->Left + this->pictureBox2->Width) &&
			(this->pictureBox1->Top + this->pictureBox1->Height > this->pictureBox2->Top)
		) this->y = -this->y;
		else if (this->pictureBox1->Top >= this->pictureBox2->Top + 5) {
			this->timer1->Enabled = false;
			this->pictureBox1->Visible = false;
			this->score -= 50;
			this->lives -= 1;
			this->label1->Text = "" + this->score;
			this->label2->Text = "" + this->lives;
			if (this->lives > 0) {
				MessageBox::Show("Zgubiona pi³ka!", "Arcanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				this->timer1->Enabled = true;
				this->pictureBox1->Top = this->pictureBox2->Top - this->pictureBox1->Height - 5;
				this->pictureBox1->Left = this->pictureBox2->Left + this->pictureBox2->Width / 2;
				this->block = false;
				this->x = 0;
				this->y = 0;
				this->pictureBox1->Visible = true;
			} else {
				this->label2->Text = ":(";
				this->picLoose->Visible = true;
				this->picAgain->Visible = true;
				this->picEnd->Visible = true;
			}
			
		}
	}
	private: System::Void moveOnBoard(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) { // odczyt za pomoc¹ klawiatury
		if (e->KeyCode == Keys::Left) this->direction = 'l';
		if (e->KeyCode == Keys::Right) this->direction = 'r';
		if (e->KeyCode == Keys::Space && this->block == false) {
			this->x = -5;
			this->y = -5;
			this->block = true;
		}
	}
private: System::Void stopBoard(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) { // podniesienie klawisza
	this->direction = 'X';
}
private: System::Void PicEnd_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void PicAgain_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lives = 3;
	this->score = 0;
	this->label2->Text = "" + this->lives;
	this->label1->Text = "" + this->score;
	this->picLoose->Visible = false;
	this->picAgain->Visible = false;
	this->picEnd->Visible = false;
	this->pictureBox1->Top = this->pictureBox2->Top - this->pictureBox1->Height - 5;
	this->pictureBox1->Left = this->pictureBox2->Left + this->pictureBox2->Width / 2;
	this->timer1->Enabled = true;
	this->pictureBox1->Visible = true;
	this->x = 0;
	this->y = 0;
	this->block = false;
	GameBoard::BackgroundImage = Image::FromFile("Resources/assets/tlo_gra_01.png");

	for each (Control^ element in this->Controls) {
		if (element->Tag == "Block" || element->Tag == "BlockMetal" || element->Tag == "ct") element->Visible;
		if (element->Tag == "ct") {
			element->Tag = "BlockMetal";
			PictureBox^ pic = (PictureBox^)element;
			pic->Image = this->imageList1->Images[1];
		}
	}
}
private: void destroyBlock(System::Windows::Forms::Control^ block) {
	if (
		this->pictureBox1->Top + this->pictureBox1->Height > block->Top && 
		this->pictureBox1->Top < block->Top + block->Height &&
		this->pictureBox1->Left + this->pictureBox1->Width > block->Left &&
		this->pictureBox1->Left < block->Left + block->Width &&
		block->Visible == true
	) {
		this->y = -this->y;
		if (block->Tag != "BlockMetal") { // zwykla cegla
			block->Visible = false;
			this->score += 10;
			this->blocksCount += 1;
		} else {
			PictureBox^ pb = (PictureBox^)block;
			pb->Image = this->imageList1->Images[2]; // podmiana na blok metalowy rozbity
			block->Tag = "ct";
			this->score += 15;
		}
		
		this->label1->Text = "" + this->score;
		if (this->blocksCount == 5) {
			this->timer1->Enabled = false;
			this->picEnd->Visible = true;
			this->picAgain->Visible = true;
			this->blocksCount = 0;
			GameBoard::BackgroundImage = Image::FromFile("Resources/assets/tlo_koniec.png");
		}
	}
}
};
}
