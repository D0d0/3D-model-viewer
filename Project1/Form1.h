#pragma once
#include "Core.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		Core^ coreN;
		Point mouseDownLoc;
		Point newLocation;
		Boolean file;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;


			 String^ path;
	public:
		Form1(array<String^>^ args)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->coreN = gcnew Core(pictureBox1);
			this->file = false;
			if (args->Length >= 1){
				this->coreN->loadFile(args[0]);
				this->coreN->drawPicture();
				this->Text = ".obj file browser: " + args[0];
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  súborToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  naèítajToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::ComponentModel::IContainer^  components;
			 /// <summary>
			 /// Required designer variable.
			 /// </summary>


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->súborToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->naèítajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
				 this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
				 this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
				 this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->button5 = (gcnew System::Windows::Forms::Button());
				 this->button6 = (gcnew System::Windows::Forms::Button());
				 this->button7 = (gcnew System::Windows::Forms::Button());
				 this->button8 = (gcnew System::Windows::Forms::Button());
				 this->button10 = (gcnew System::Windows::Forms::Button());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->button11 = (gcnew System::Windows::Forms::Button());
				 this->button12 = (gcnew System::Windows::Forms::Button());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->button9 = (gcnew System::Windows::Forms::Button());
				 this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
				 this->button13 = (gcnew System::Windows::Forms::Button());
				 this->button14 = (gcnew System::Windows::Forms::Button());
				 this->button15 = (gcnew System::Windows::Forms::Button());
				 this->button16 = (gcnew System::Windows::Forms::Button());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->menuStrip1->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
				 this->groupBox1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Location = System::Drawing::Point(12, 27);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(600, 400);
				 this->pictureBox1->TabIndex = 0;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseDown);
				 this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseMove);
				 this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseUp);
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->súborToolStripMenuItem });
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Size = System::Drawing::Size(823, 24);
				 this->menuStrip1->TabIndex = 2;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // súborToolStripMenuItem
				 // 
				 this->súborToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->naèítajToolStripMenuItem });
				 this->súborToolStripMenuItem->Name = L"súborToolStripMenuItem";
				 this->súborToolStripMenuItem->Size = System::Drawing::Size(50, 20);
				 this->súborToolStripMenuItem->Text = L"Súbor";
				 // 
				 // naèítajToolStripMenuItem
				 // 
				 this->naèítajToolStripMenuItem->Name = L"naèítajToolStripMenuItem";
				 this->naèítajToolStripMenuItem->Size = System::Drawing::Size(111, 22);
				 this->naèítajToolStripMenuItem->Text = L"Naèítaj";
				 this->naèítajToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::naèítajToolStripMenuItem_Click);
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileName = L"openFileDialog1";
				 this->openFileDialog1->Filter = L"OBJ files|*.obj";
				 this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(632, 58);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(47, 13);
				 this->label1->TabIndex = 3;
				 this->label1->Text = L"Scale X:";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(632, 100);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(44, 13);
				 this->label2->TabIndex = 4;
				 this->label2->Text = L"ScaleY:";
				 // 
				 // trackBar1
				 // 
				 this->trackBar1->Location = System::Drawing::Point(685, 49);
				 this->trackBar1->Maximum = 110;
				 this->trackBar1->Minimum = 1;
				 this->trackBar1->Name = L"trackBar1";
				 this->trackBar1->Size = System::Drawing::Size(104, 45);
				 this->trackBar1->TabIndex = 5;
				 this->trackBar1->Value = 100;
				 this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
				 // 
				 // checkBox1
				 // 
				 this->checkBox1->AutoSize = true;
				 this->checkBox1->Checked = true;
				 this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
				 this->checkBox1->Location = System::Drawing::Point(635, 27);
				 this->checkBox1->Name = L"checkBox1";
				 this->checkBox1->Size = System::Drawing::Size(81, 17);
				 this->checkBox1->TabIndex = 6;
				 this->checkBox1->Text = L"Same scale";
				 this->checkBox1->UseVisualStyleBackColor = true;
				 this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
				 // 
				 // trackBar2
				 // 
				 this->trackBar2->Location = System::Drawing::Point(685, 89);
				 this->trackBar2->Maximum = 110;
				 this->trackBar2->Minimum = 1;
				 this->trackBar2->Name = L"trackBar2";
				 this->trackBar2->Size = System::Drawing::Size(104, 45);
				 this->trackBar2->TabIndex = 7;
				 this->trackBar2->Value = 100;
				 this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
				 // 
				 // timer1
				 // 
				 this->timer1->Enabled = true;
				 this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
				 // 
				 // timer2
				 // 
				 this->timer2->Interval = 10;
				 this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(19, 19);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(75, 23);
				 this->button1->TabIndex = 8;
				 this->button1->Text = L"Start rotation";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				 // 
				 // checkBox2
				 // 
				 this->checkBox2->AutoSize = true;
				 this->checkBox2->Location = System::Drawing::Point(19, 48);
				 this->checkBox2->Name = L"checkBox2";
				 this->checkBox2->Size = System::Drawing::Size(70, 17);
				 this->checkBox2->TabIndex = 9;
				 this->checkBox2->Text = L"Around X";
				 this->checkBox2->UseVisualStyleBackColor = true;
				 this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
				 // 
				 // checkBox3
				 // 
				 this->checkBox3->AutoSize = true;
				 this->checkBox3->Location = System::Drawing::Point(19, 72);
				 this->checkBox3->Name = L"checkBox3";
				 this->checkBox3->Size = System::Drawing::Size(70, 17);
				 this->checkBox3->TabIndex = 10;
				 this->checkBox3->Text = L"Around Y";
				 this->checkBox3->UseVisualStyleBackColor = true;
				 this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
				 // 
				 // checkBox4
				 // 
				 this->checkBox4->AutoSize = true;
				 this->checkBox4->Location = System::Drawing::Point(19, 96);
				 this->checkBox4->Name = L"checkBox4";
				 this->checkBox4->Size = System::Drawing::Size(70, 17);
				 this->checkBox4->TabIndex = 11;
				 this->checkBox4->Text = L"Around Z";
				 this->checkBox4->UseVisualStyleBackColor = true;
				 this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Controls->Add(this->button1);
				 this->groupBox1->Controls->Add(this->checkBox4);
				 this->groupBox1->Controls->Add(this->checkBox2);
				 this->groupBox1->Controls->Add(this->checkBox3);
				 this->groupBox1->Location = System::Drawing::Point(635, 243);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(122, 123);
				 this->groupBox1->TabIndex = 12;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"Rotation";
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(635, 156);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(75, 23);
				 this->button3->TabIndex = 14;
				 this->button3->Text = L"Around X +";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
				 // 
				 // button4
				 // 
				 this->button4->Location = System::Drawing::Point(716, 156);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(75, 23);
				 this->button4->TabIndex = 15;
				 this->button4->Text = L"Around X -";
				 this->button4->UseVisualStyleBackColor = true;
				 this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
				 // 
				 // button5
				 // 
				 this->button5->Location = System::Drawing::Point(716, 185);
				 this->button5->Name = L"button5";
				 this->button5->Size = System::Drawing::Size(75, 23);
				 this->button5->TabIndex = 17;
				 this->button5->Text = L"Around Y -";
				 this->button5->UseVisualStyleBackColor = true;
				 this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
				 // 
				 // button6
				 // 
				 this->button6->Location = System::Drawing::Point(635, 185);
				 this->button6->Name = L"button6";
				 this->button6->Size = System::Drawing::Size(75, 23);
				 this->button6->TabIndex = 16;
				 this->button6->Text = L"Around Y +";
				 this->button6->UseVisualStyleBackColor = true;
				 this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
				 // 
				 // button7
				 // 
				 this->button7->Location = System::Drawing::Point(716, 214);
				 this->button7->Name = L"button7";
				 this->button7->Size = System::Drawing::Size(75, 23);
				 this->button7->TabIndex = 19;
				 this->button7->Text = L"Around Z -";
				 this->button7->UseVisualStyleBackColor = true;
				 this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
				 // 
				 // button8
				 // 
				 this->button8->Location = System::Drawing::Point(635, 214);
				 this->button8->Name = L"button8";
				 this->button8->Size = System::Drawing::Size(75, 23);
				 this->button8->TabIndex = 18;
				 this->button8->Text = L"Around Z +";
				 this->button8->UseVisualStyleBackColor = true;
				 this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
				 // 
				 // button10
				 // 
				 this->button10->Location = System::Drawing::Point(635, 127);
				 this->button10->Name = L"button10";
				 this->button10->Size = System::Drawing::Size(75, 23);
				 this->button10->TabIndex = 21;
				 this->button10->Text = L"Scale * 0.9";
				 this->button10->UseVisualStyleBackColor = true;
				 this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(714, 127);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(75, 23);
				 this->button2->TabIndex = 22;
				 this->button2->Text = L"Scale * 1.1";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
				 // 
				 // button11
				 // 
				 this->button11->Location = System::Drawing::Point(635, 372);
				 this->button11->Name = L"button11";
				 this->button11->Size = System::Drawing::Size(78, 23);
				 this->button11->TabIndex = 24;
				 this->button11->Text = L"Translate Z +";
				 this->button11->UseVisualStyleBackColor = true;
				 this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
				 // 
				 // button12
				 // 
				 this->button12->Location = System::Drawing::Point(714, 372);
				 this->button12->Name = L"button12";
				 this->button12->Size = System::Drawing::Size(75, 23);
				 this->button12->TabIndex = 25;
				 this->button12->Text = L"Translate Z -";
				 this->button12->UseVisualStyleBackColor = true;
				 this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
				 // 
				 // textBox1
				 // 
				 this->textBox1->Location = System::Drawing::Point(635, 472);
				 this->textBox1->MaxLength = 50;
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(44, 20);
				 this->textBox1->TabIndex = 26;
				 this->textBox1->Text = L"0";
				 this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
				 // 
				 // textBox2
				 // 
				 this->textBox2->Location = System::Drawing::Point(685, 472);
				 this->textBox2->MaxLength = 50;
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(44, 20);
				 this->textBox2->TabIndex = 27;
				 this->textBox2->Text = L"0";
				 this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
				 // 
				 // textBox3
				 // 
				 this->textBox3->Location = System::Drawing::Point(735, 472);
				 this->textBox3->MaxLength = 50;
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(44, 20);
				 this->textBox3->TabIndex = 28;
				 this->textBox3->Text = L"10";
				 this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
				 // 
				 // button9
				 // 
				 this->button9->Location = System::Drawing::Point(635, 499);
				 this->button9->Name = L"button9";
				 this->button9->Size = System::Drawing::Size(75, 23);
				 this->button9->TabIndex = 29;
				 this->button9->Text = L"Object color";
				 this->button9->UseVisualStyleBackColor = true;
				 this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
				 // 
				 // colorDialog1
				 // 
				 this->colorDialog1->AnyColor = true;
				 // 
				 // button13
				 // 
				 this->button13->Location = System::Drawing::Point(635, 402);
				 this->button13->Name = L"button13";
				 this->button13->Size = System::Drawing::Size(78, 23);
				 this->button13->TabIndex = 30;
				 this->button13->Text = L"Translate Y +";
				 this->button13->UseVisualStyleBackColor = true;
				 this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
				 // 
				 // button14
				 // 
				 this->button14->Location = System::Drawing::Point(717, 402);
				 this->button14->Name = L"button14";
				 this->button14->Size = System::Drawing::Size(72, 23);
				 this->button14->TabIndex = 31;
				 this->button14->Text = L"Translate Y-";
				 this->button14->UseVisualStyleBackColor = true;
				 this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
				 // 
				 // button15
				 // 
				 this->button15->Location = System::Drawing::Point(635, 432);
				 this->button15->Name = L"button15";
				 this->button15->Size = System::Drawing::Size(78, 23);
				 this->button15->TabIndex = 32;
				 this->button15->Text = L"Translate X +";
				 this->button15->UseVisualStyleBackColor = true;
				 this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
				 // 
				 // button16
				 // 
				 this->button16->Location = System::Drawing::Point(717, 432);
				 this->button16->Name = L"button16";
				 this->button16->Size = System::Drawing::Size(72, 23);
				 this->button16->TabIndex = 33;
				 this->button16->Text = L"Translate X -";
				 this->button16->UseVisualStyleBackColor = true;
				 this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
				 // 
				 // Form1
				 // 
				 this->AllowDrop = true;
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(823, 552);
				 this->Controls->Add(this->button16);
				 this->Controls->Add(this->button15);
				 this->Controls->Add(this->button14);
				 this->Controls->Add(this->button13);
				 this->Controls->Add(this->button9);
				 this->Controls->Add(this->textBox3);
				 this->Controls->Add(this->textBox2);
				 this->Controls->Add(this->textBox1);
				 this->Controls->Add(this->button12);
				 this->Controls->Add(this->button11);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->button10);
				 this->Controls->Add(this->button7);
				 this->Controls->Add(this->button8);
				 this->Controls->Add(this->button5);
				 this->Controls->Add(this->button6);
				 this->Controls->Add(this->button4);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->groupBox1);
				 this->Controls->Add(this->trackBar2);
				 this->Controls->Add(this->checkBox1);
				 this->Controls->Add(this->trackBar1);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->menuStrip1);
				 this->DoubleBuffered = true;
				 this->MainMenuStrip = this->menuStrip1;
				 this->MinimumSize = System::Drawing::Size(646, 480);
				 this->Name = L"Form1";
				 this->Text = L".obj file browser";
				 this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
				 this->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::Form1_DragDrop);
				 this->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::Form1_DragEnter);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->cleanPicture();
	}

	private: System::Void naèítajToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->openFileDialog1->ShowDialog();
		this->checkBox2->Checked = false;
		this->checkBox3->Checked = false;
		this->checkBox4->Checked = false;
	}

	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		this->coreN->loadFile(this->openFileDialog1->FileName);
		this->button1->Text = "Start rotation";
		this->checkBox2->Checked = false;
		this->checkBox3->Checked = false;
		this->checkBox4->Checked = false;
		this->coreN->drawPicture();
		this->Text = ".obj file browser: " + this->openFileDialog1->FileName;
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked){
			trackBar2->Value = trackBar1->Value;
		}
		this->coreN->changeScale(trackBar1->Value, trackBar2->Value);
		this->coreN->drawPicture();
	}

	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked){
			trackBar2->Value = trackBar1->Value;
		}
		this->coreN->changeScale(trackBar1->Value, trackBar2->Value);
		this->coreN->drawPicture();
	}

	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked){
			trackBar1->Value = trackBar2->Value;
		}
		this->coreN->changeScale(trackBar1->Value, trackBar2->Value);
		this->coreN->drawPicture();
	}

	private: System::Void Form1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		array<String^>^ files = (array<String^>^)e->Data->GetData(DataFormats::FileDrop);
		this->coreN->loadFile(files[0]);
		this->button1->Text = "Start rotation";
		this->checkBox2->Checked = false;
		this->checkBox3->Checked = false;
		this->checkBox4->Checked = false;
		this->coreN->drawPicture();
		this->Text = ".obj file browser: " + files[0];
	}

	private: System::Void Form1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		if (e->Data->GetDataPresent(DataFormats::FileDrop)){
			e->Effect = DragDropEffects::Copy;
		}
	}

	private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == Windows::Forms::MouseButtons::Left){
			this->mouseDownLoc = e->Location;
		}
	}

	private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == Windows::Forms::MouseButtons::Left){
			Point currentMousePos = e->Location;
			this->newLocation.X = currentMousePos.X - this->mouseDownLoc.X;
			this->newLocation.Y = currentMousePos.Y - this->mouseDownLoc.Y;
			this->coreN->changePosition(this->newLocation.X, this->newLocation.Y);
			this->coreN->drawPicture();
		}
	}

	private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->coreN->setNewPosition(this->newLocation.X, this->newLocation.Y);
		this->coreN->changePosition(0, 0);
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->drawPicture();
		timer1->Enabled = false;
	}

	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->drawPicture();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->resetRotation();
		this->timer2->Enabled = this->coreN->isRotating();
		this->button1->Text = this->coreN->isRotating() ? "Stop rotation" : "Start rotation";
	}

	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->setRotationX(checkBox2->Checked);
	}

	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->setRotationY(checkBox3->Checked);
	}

	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->setRotationZ(checkBox4->Checked);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->button1->Text = "Start rotation";
		this->checkBox2->Checked = false;
		this->checkBox3->Checked = false;
		this->checkBox4->Checked = false;
		this->coreN->Reset();
		this->coreN->drawPicture();
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->rotateXPlus();
		this->coreN->drawPicture();
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->rotateXMinus();
		this->coreN->drawPicture();
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->rotateYPlus();
		this->coreN->drawPicture();
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->rotateYMinus();
		this->coreN->drawPicture();
	}

	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->rotateZPlus();
		this->coreN->drawPicture();
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->rotateZMinus();
		this->coreN->drawPicture();
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->scaleMinus();
		this->coreN->drawPicture();
	}

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->scalePlus();
		this->coreN->drawPicture();
	}

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->translateZPlus();
		this->coreN->drawPicture();
	}

	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->translateZMinus();
		this->coreN->drawPicture();
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try{
			this->coreN->setLightX(-Convert::ToInt32(textBox1->Text));
			this->coreN->drawPicture();
		}
		catch (Exception^ e){

		}
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try{
			this->coreN->setLightY(-Convert::ToInt32(textBox2->Text));
			this->coreN->drawPicture();
		}
		catch (Exception^ e){

		}
	}

	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try{
			this->coreN->setLightZ(Convert::ToInt32(textBox3->Text));
			this->coreN->drawPicture();
		}
		catch (Exception^ e){

		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		this->colorDialog1->ShowDialog();
		this->coreN->setColor(this->colorDialog1->Color);
		this->coreN->drawPicture();
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->translateYPlus();
		this->coreN->drawPicture();
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->translateYMinus();
		this->coreN->drawPicture();
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->translateXPlus();
		this->coreN->drawPicture();
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		this->coreN->translateXMinus();
		this->coreN->drawPicture();
	}
	};
}