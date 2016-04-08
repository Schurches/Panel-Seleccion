#pragma once
#include<iostream>
#include<Windows.h>
#include<mmsystem.h>

namespace SeleccionYJuego {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Media;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Juego
	/// </summary>
	public ref class Juego : public System::Windows::Forms::Form
	{
	public:
		Juego(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Juego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;







	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Juego::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(148, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(230, 140);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Juego::listBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(7, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 300);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Jugador 1";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(281, 173);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(90, 43);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Seleccionar";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Juego::button14_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(281, 235);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(90, 42);
			this->button17->TabIndex = 22;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Juego::button17_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button13);
			this->groupBox5->Controls->Add(this->radioButton3);
			this->groupBox5->Controls->Add(this->radioButton2);
			this->groupBox5->Controls->Add(this->radioButton1);
			this->groupBox5->Location = System::Drawing::Point(173, 165);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(98, 116);
			this->groupBox5->TabIndex = 21;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Jugador 1";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(6, 85);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(85, 23);
			this->button13->TabIndex = 3;
			this->button13->Text = L"Next Skin";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Juego::button13_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(6, 57);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(67, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Espada";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Juego::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(6, 34);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(60, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Lanza";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Juego::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(6, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Hacha";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Juego::radioButton1_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Location = System::Drawing::Point(8, 165);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(135, 116);
			this->groupBox4->TabIndex = 20;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Seleccionar unidad";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(12, 82);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 23);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Seleccionar";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Juego::button10_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Jinete", L"Caballero", L"Luchador", L"Mercenario",
					L"Mirmidon"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 18);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(112, 25);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Juego::comboBox1_SelectedIndexChanged);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(12, 53);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 23);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Next Character";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Juego::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(137, 140);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->groupBox6);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(689, 23);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(383, 300);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Jugador 2";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Juego::groupBox2_Enter);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(16, 171);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(88, 43);
			this->button16->TabIndex = 25;
			this->button16->Text = L"Seleccionar";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Juego::button16_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(16, 239);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(87, 40);
			this->button18->TabIndex = 23;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Juego::button18_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton4);
			this->groupBox6->Controls->Add(this->button15);
			this->groupBox6->Controls->Add(this->radioButton6);
			this->groupBox6->Controls->Add(this->radioButton5);
			this->groupBox6->Location = System::Drawing::Point(115, 165);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(110, 116);
			this->groupBox6->TabIndex = 23;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Jugador 2";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(6, 12);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(62, 21);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Hacha";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Juego::radioButton4_CheckedChanged);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(7, 82);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(84, 23);
			this->button15->TabIndex = 24;
			this->button15->Text = L"Next Skin";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Juego::button15_Click);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(7, 57);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(67, 21);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Espada";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Juego::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(7, 34);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(60, 21);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Lanza";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Juego::radioButton5_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Location = System::Drawing::Point(244, 165);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(131, 116);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Seleccionar Unidad";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(6, 83);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(119, 23);
			this->button12->TabIndex = 25;
			this->button12->Text = L"Seleccionar";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Juego::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(6, 54);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(119, 23);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Next Character";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Juego::button11_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Jinete", L"Caballero", L"Luchador", L"Mercenario",
					L"Mirmidon"
			});
			this->comboBox2->Location = System::Drawing::Point(7, 20);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(118, 25);
			this->comboBox2->TabIndex = 0;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Juego::comboBox2_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 17;
			this->listBox2->Location = System::Drawing::Point(8, 19);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(230, 140);
			this->listBox2->TabIndex = 1;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Juego::listBox2_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(244, 19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(131, 140);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Juego::pictureBox2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(211, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 64);
			this->button1->TabIndex = 13;
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Juego::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(108, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 64);
			this->button2->TabIndex = 14;
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Juego::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(7, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 64);
			this->button3->TabIndex = 15;
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Juego::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(311, 329);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 64);
			this->button4->TabIndex = 16;
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Juego::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(785, 329);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 64);
			this->button5->TabIndex = 17;
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Juego::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(891, 329);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 64);
			this->button6->TabIndex = 18;
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Juego::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(993, 329);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(79, 64);
			this->button7->TabIndex = 19;
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Juego::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(690, 329);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(79, 64);
			this->button8->TabIndex = 20;
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Juego::button8_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Location = System::Drawing::Point(439, 153);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(209, 170);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(24, 407);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 28);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Estatus:";
			this->label1->Click += gcnew System::EventHandler(this, &Juego::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(721, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 28);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Estatus: ";
			this->label2->Click += gcnew System::EventHandler(this, &Juego::label2_Click);
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1082, 450);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Juego";
			this->Text = L"Juego";
			this->Load += gcnew System::EventHandler(this, &Juego::Juego_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		///////////DECLARANDO SKINS DEL JUGADOR
		static Random^ R = gcnew Random();
		ref struct Skin
		{
			String^URL;
			String^Nombre;
			String^Arma;
			int Vida = R->Next(10,20);
			int Ataque = R->Next(2, 8);
			int Habilidad = R->Next(2, 7);
			int Velocidad = R->Next(2, 8);
			int Suerte = R->Next(0,6);
			int Defensa = R->Next(0,6);
			int Movimiento = R->Next(1,3);
			Skin^Link;
		};
		static Skin^PTR6 = nullptr;
		static Skin^PTR7 = nullptr;
		static Skin^PTR8 = nullptr;
		static Skin^SkinPlayer = nullptr;
		static Skin^SkinPlayer2 = nullptr;
		static Skin^SkinSelecionado2 = nullptr;
		static Skin^SkinSelecionado = nullptr;
		//////////////////////////////////////////////DECLARANDO LAS CARACTERISTICAS DE LOS PERSONAJES
		//Jinete
		ref struct Unidad
		{
			String^Nombre;
			String^Tipo;
			String^ImagenURL;
			int Vida;
			int Ataque;
			int Habilidad;
			int Velocidad;
			int Suerte;
			int Defensa;
			int Movimiento;
			Unidad^Link;
		};
		ref struct Unidad2
		{
			String^Nombre;
			String^Tipo;
			String^ImagenURL;
			int Vida;
			int Ataque;
			int Habilidad;
			int Velocidad;
			int Suerte;
			int Defensa;
			int Movimiento;
			Unidad2^Link;
		};
		//Jugador
		//Listas PTR y nodos auxiliares
		static Unidad^PTR1 = nullptr;
		static Unidad^UnidadAux = nullptr;
		static Unidad^UnidadSelec1 = nullptr;
		static Unidad2^PTR2 = nullptr;
		static Unidad2^UnidadAux2 = nullptr;
		static Unidad2^UnidadSelec2 = nullptr;
		String^ContenidoB1;
		String^ContenidoB2;
		String^ContenidoB3;
		String^ContenidoB5;
		String^ContenidoB6;
		String^ContenidoB7;
		//Booleanos de casillas ocupadas
		bool Casilla1 = false, Casilla2 = false, Casilla3 = false, Casilla4 = false, Casilla5 = false, Casilla6 = false, Casilla7 = false, Casilla8 = false;
		bool J1Ready=false, J2Ready = false;
		int queLista = 0, queLista2 = 0;
		
		void siguienteSkin(int Jugador){
			if (Jugador == 1)
			{
				if (radioButton1->Checked == true)
				{
					if (queLista != 6 || SkinPlayer == nullptr)
					{
						SkinPlayer = PTR6;
						queLista = 6;
						
					}
					else
					{
						SkinPlayer = SkinPlayer->Link;
					}
				}
				else
				{
					if (radioButton2->Checked == true)
					{
						if (queLista != 7 || SkinPlayer == nullptr)
						{
							SkinPlayer = PTR7;
							queLista = 7;
						}
						else
						{
							SkinPlayer = SkinPlayer->Link;
						}
					}
					else
					{
						if (queLista != 8 || SkinPlayer == nullptr)
						{
							SkinPlayer = PTR8;
							queLista = 8;
						}
						else
						{
							SkinPlayer = SkinPlayer->Link;
						}
					}
				}
				listBox1->Items->Clear();
				listBox1->Items->Add("Personaje: " + SkinPlayer->Nombre);
				listBox1->Items->Add("Puntos de Vida: " + SkinPlayer->Vida + " LP");
				listBox1->Items->Add("Ataque: " + SkinPlayer->Ataque + " Puntos");
				listBox1->Items->Add("Habilidad: " + SkinPlayer->Habilidad);
				listBox1->Items->Add("Velocidad: " + SkinPlayer->Velocidad);
				listBox1->Items->Add("Suerte: " + SkinPlayer->Suerte);
				listBox1->Items->Add("Defensa: " + SkinPlayer->Defensa + " Puntos");
				listBox1->Items->Add("Capacidad de Movimiento: " + SkinPlayer->Movimiento + " Casillas");
				pictureBox1->Load(SkinPlayer->URL);
			}
			else
			{
				//PARA JUGADOR 2
				if (radioButton4->Checked == true)
				{
					if (queLista2 != 6 || SkinPlayer2 == nullptr)
					{
						SkinPlayer2 = PTR6;
						queLista2 = 6;
					}
					else
					{
						SkinPlayer2 = SkinPlayer2->Link;
					}
				}
				else
				{
					if (radioButton5->Checked == true)
					{
						if (queLista2 != 7 || SkinPlayer2 == nullptr)
						{
							SkinPlayer2 = PTR7;
							queLista2 = 7;
						}
						else
						{
							SkinPlayer2 = SkinPlayer2->Link;
						}
							listBox2->Items->Clear();
					}
					else
					{
						if (queLista2 != 8 || SkinPlayer2 == nullptr)
						{
							SkinPlayer2 = PTR8;
							queLista2 = 8;
						}
						else
						{
							SkinPlayer2 = SkinPlayer2->Link;
						}
							listBox2->Items->Clear();						
					}
				}
				listBox2->Items->Clear();
				listBox2->Items->Add("Personaje: " + SkinPlayer2->Nombre);
				listBox2->Items->Add("Puntos de Vida: " + SkinPlayer2->Vida + " LP");
				listBox2->Items->Add("Ataque: " + SkinPlayer2->Ataque + " Puntos");
				listBox2->Items->Add("Habilidad: " + SkinPlayer2->Habilidad);
				listBox2->Items->Add("Velocidad: " + SkinPlayer2->Velocidad);
				listBox2->Items->Add("Suerte: " + SkinPlayer2->Suerte);
				listBox2->Items->Add("Defensa: " + SkinPlayer2->Defensa + " Puntos");
				listBox2->Items->Add("Capacidad de Movimiento: " + SkinPlayer2->Movimiento + " Casillas");
				pictureBox2->Load(SkinPlayer2->URL);
			}
			
		}
	
		void unidadSiguiente(int Jugador, String^UnidadSeleccionada){
			if (Jugador==1)
			{
				if (UnidadAux == nullptr)
				{
					UnidadAux = PTR1;
				}
				else
				{
					UnidadAux = UnidadAux->Link;
				}
				String^T = UnidadAux->Tipo;
				while (!(T->Equals(UnidadSeleccionada)))
				{
					UnidadAux = UnidadAux->Link;
					T = UnidadAux->Tipo;
				}
				listBox1->Items->Clear();
				listBox1->Items->Add("Personaje: " + UnidadAux->Nombre);
				listBox1->Items->Add("Puntos de Vida: " + UnidadAux->Vida + " LP");
				listBox1->Items->Add("Ataque: " + UnidadAux->Ataque + " Puntos");
				listBox1->Items->Add("Habilidad: " + UnidadAux->Habilidad);
				listBox1->Items->Add("Velocidad: " + UnidadAux->Velocidad);
				listBox1->Items->Add("Suerte: " + UnidadAux->Suerte);
				listBox1->Items->Add("Defensa: " + UnidadAux->Defensa + " Puntos");
				listBox1->Items->Add("Capacidad de Movimiento: " + UnidadAux->Movimiento + " Casillas");
				pictureBox1->Load(UnidadAux->ImagenURL);
			}
			else
			{
				if (UnidadAux2 == nullptr)
				{
					UnidadAux2 = PTR2;
				}
				else
				{
					UnidadAux2 = UnidadAux2->Link;
				}
				String^T = UnidadAux2->Tipo;
				while (!(T->Equals(UnidadSeleccionada)))
				{
					UnidadAux2 = UnidadAux2->Link;
					T = UnidadAux2->Tipo;
				}
				listBox2->Items->Clear();
				listBox2->Items->Add("Personaje: " + UnidadAux2->Nombre);
				listBox2->Items->Add("Puntos de Vida: " + UnidadAux2->Vida + " LP");
				listBox2->Items->Add("Ataque: " + UnidadAux2->Ataque + " Puntos");
				listBox2->Items->Add("Habilidad: " + UnidadAux2->Habilidad);
				listBox2->Items->Add("Velocidad: " + UnidadAux2->Velocidad);
				listBox2->Items->Add("Suerte: " + UnidadAux2->Suerte);
				listBox2->Items->Add("Defensa: " + UnidadAux2->Defensa + " Puntos");
				listBox2->Items->Add("Capacidad de Movimiento: " + UnidadAux2->Movimiento + " Casillas");
				pictureBox2->Load(UnidadAux2->ImagenURL);
			}
		}
		
		void nuevoSkin(String^Name, String^URL, String^Tipo){
			Skin^P = gcnew Skin();
			P->Nombre = Name;
			P->URL = URL;
			P->Arma = Tipo;
			if (Tipo->Equals("Hacha"))
			{
				if (PTR6 == nullptr)
				{
					PTR6 = P;
					PTR6->Link = PTR6;
					P = nullptr;
				}
				else
				{
					Skin^Q = gcnew Skin();
					Q = PTR6;
					while (Q->Link != PTR6)
					{
						Q = Q->Link;
					}
					Q->Link = P;
					P->Link = PTR6;
					Q = nullptr;
					P = nullptr;
				}
			}
			else
			{
				if (Tipo->Equals("Lanza"))
				{
					if (PTR7 == nullptr)
					{
						PTR7 = P;
						PTR7->Link = PTR7;
						P = nullptr;
					}
					else
					{
						Skin^Q = gcnew Skin();
						Q = PTR7;
						while (Q->Link != PTR7)
						{
							Q = Q->Link;
						}
						Q->Link = P;
						P->Link = PTR7;
						Q = nullptr;
						P = nullptr;
					}
				}
				else
				{
					if (PTR8 == nullptr)
					{
						PTR8 = P;
						PTR8->Link = PTR8;
						P = nullptr;
					}
					else
					{
						Skin^Q = gcnew Skin();
						Q = PTR8;
						while (Q->Link != PTR8)
						{
							Q = Q->Link;
						}
						Q->Link = P;
						P->Link = PTR8;
						Q = nullptr;
						P = nullptr;
					}
				}
			}
			

		}
		
		void nuevaUnidad(String^Name, String^Tipo, String^URL, int HP, int Attack, int Hab, int Speed, int Luck, int Def, int Mov)
		{
			if (Tipo->Equals("Jinete") || Tipo->Equals("Caballero") || Tipo->Equals("Mirmidon") || Tipo->Equals("Mercenario") || Tipo->Equals("Luchador"))
			{
				Unidad^P = gcnew Unidad();
				P->Nombre = Name;
				P->Tipo = Tipo;
				P->ImagenURL = URL;
				P->Vida = HP;
				P->Ataque = Attack;
				P->Habilidad = Hab;
				P->Velocidad = Speed;
				P->Suerte = Luck;
				P->Defensa = Def;
				P->Movimiento = Mov;
				if (PTR1 == nullptr)
				{
					PTR1 = P;
					PTR1->Link = PTR1;
					P = nullptr;
				}
				else
				{
					Unidad^Q = gcnew Unidad();
					Q = PTR1;
					while (Q->Link != PTR1)
					{
						Q = Q->Link;
					}
					Q->Link = P;
					P->Link = PTR1;
					Q = nullptr;
					P = nullptr;
				}
			}
			else
			{
				MessageBox::Show("Este tipo de unidad no existe");
			}
		
		}
	
		void nuevaUnidad2(String^Name, String^Tipo, String^URL, int HP, int Attack, int Hab, int Speed, int Luck, int Def, int Mov)
		{
			if (Tipo->Equals("Jinete") || Tipo->Equals("Caballero") || Tipo->Equals("Mirmidon") || Tipo->Equals("Mercenario") || Tipo->Equals("Luchador"))
			{
				Unidad2^P = gcnew Unidad2();
				P->Nombre = Name;
				P->Tipo = Tipo;
				P->ImagenURL = URL;
				P->Vida = HP;
				P->Ataque = Attack;
				P->Habilidad = Hab;
				P->Velocidad = Speed;
				P->Suerte = Luck;
				P->Defensa = Def;
				P->Movimiento = Mov;
				if (PTR2 == nullptr)
				{
					PTR2 = P;
					PTR2->Link = PTR2;
					P = nullptr;
				}
				else
				{
					Unidad2^Q = gcnew Unidad2();
					Q = PTR2;
					while (Q->Link != PTR2)
					{
						Q = Q->Link;
					}
					Q->Link = P;
					P->Link = PTR2;
					Q = nullptr;
					P = nullptr;
				}
			}
			else
			{
				MessageBox::Show("Este tipo de unidad no existe");
			}

		}

		void moverseOPosicionarse(){
			if ((comboBox1->SelectedItem->Equals("Jinete")))
			{
				unidadSiguiente(1,"Jinete");
			}
			else
			{
				if (comboBox1->Text->Equals("Caballero"))
				{
					unidadSiguiente(1, "Caballero");
				}
				else
				{
					if (comboBox1->Text->Equals("Luchador"))
					{
						unidadSiguiente(1, "Luchador");
					}
					else
					{
						if (comboBox1->Text->Equals("Mercenario"))
						{
							unidadSiguiente(1, "Mercenario");
						}
						else
						{
							if (comboBox1->Text->Equals("Mirmidon"))
							{
								unidadSiguiente(1, "Mirmidon");
							}
							else
							{
								MessageBox::Show("Esta unidad no existe");
							}
						}
					}
				}
			}
			
			
			
			
		}
		
		void moverseOPosicionarse2(){
			if (comboBox2->Text->Equals("Jinete"))
			{
				unidadSiguiente(2, "Jinete");
			}
			else
			{
				if (comboBox2->Text->Equals("Caballero"))
				{
					unidadSiguiente(2, "Caballero");
				}
				else
				{
					if (comboBox2->Text->Equals("Luchador"))
					{
						unidadSiguiente(2, "Luchador");
					}
					else
					{
						if (comboBox2->Text->Equals("Mercenario"))
						{
							unidadSiguiente(2, "Mercenario");
						}
						else
						{
							if (comboBox2->Text->Equals("Mirmidon"))
							{
								unidadSiguiente(2, "Mirmidon");
							}
							else
							{
								MessageBox::Show("Esta unidad no existe");
							}
						}
					}
				}
			}
			
			
			
			
		}
	
		void seleccionarSkin(int Jugador){
			if (Jugador == 1)
			{
				SkinSelecionado = SkinPlayer;
				Skin^P = gcnew Skin();
				///Poniendo el arma en el nodo
				if (radioButton1->Checked == true)
				{
					P = PTR6;
					while (P->Link != SkinPlayer)
					{
						P = P->Link;
					}
					if (SkinPlayer == PTR6)
					{
						PTR6 = PTR6->Link;
					}
					P->Link = SkinPlayer->Link;
				}
				else
				{
					if (radioButton2->Checked == true)
					{
						P = PTR7;
						while (P->Link != SkinPlayer)
						{
							P = P->Link;
						}
						if (SkinPlayer == PTR7)
						{
							PTR7 = PTR7->Link;
						}
						P->Link = SkinPlayer->Link;
					}
					else
					{
						P = PTR8;
						while (P->Link != SkinPlayer)
						{
							P = P->Link;
						}
						if (SkinPlayer == PTR8)
						{
							PTR8 = PTR8->Link;
						}
						P->Link = SkinPlayer->Link;
					}
				}
				button4->Enabled = true;
				button4->BackgroundImage = Image::FromFile(SkinPlayer->URL);
				button4->Text = SkinPlayer->Nombre;
				MessageBox::Show("Seleccionaste el arma: '" + SkinPlayer->Arma + "' y el skin: '" + SkinPlayer->Nombre + "'");
				Casilla4 = true;
				P = nullptr;
				SkinPlayer = nullptr;
				Listo(1);
			}
			else
			{
				SkinSelecionado2 = SkinPlayer2;
				Skin^P = gcnew Skin();
				
				///Poniendo el arma en el nodo
				if (radioButton4->Checked == true)
				{
					P = PTR6;
					while (P->Link != SkinPlayer2)
					{
						P = P->Link;
					}
					if (SkinPlayer2 == PTR6)
					{
						PTR6 = PTR6->Link;
					}
					P->Link = SkinPlayer2->Link;
				}
				else
				{
					if (radioButton5->Checked == true)
					{
						P = PTR7;
						while (P->Link != SkinPlayer2)
						{
							P = P->Link;
						}
						if (SkinPlayer2 == PTR7)
						{
							PTR7 = PTR7->Link;
						}
						P->Link = SkinPlayer2->Link;
					}
					else
					{
						P = PTR8;
						while (P->Link != SkinPlayer2)
						{
							P = P->Link;
						}
						if (SkinPlayer2 == PTR8)
						{
							PTR8 = PTR8->Link;
						}
						P->Link = SkinPlayer2->Link;
					}
				}
				button8->Enabled = true;
				button8->BackgroundImage = Image::FromFile(SkinPlayer2->URL);
				button8->Text = SkinPlayer2->Nombre;
				MessageBox::Show("Seleccionaste el arma: '" + SkinPlayer2->Arma + "' y el skin: '" + SkinPlayer2->Nombre + "'");
				Casilla8 = true;
				P = nullptr;
				SkinPlayer2 = nullptr;
				Listo(2);
			}
			
		}
		
		void PersonajeSeleccionado(int Casilla){
			String^Type;
			if (Casilla >= 1 && Casilla <= 3)
			{
				if (comboBox1->Text->Equals("Jinete") || comboBox1->Text->Equals("Caballero") || comboBox1->Text->Equals("Luchador") || comboBox1->Text->Equals("Mirmidon") || comboBox1->Text->Equals("Mercenario"))
				{
					Type = Convert::ToString(comboBox1->Text);
					UnidadSelec1 = UnidadAux;
					Unidad^P = gcnew Unidad();
					P = PTR1;
					while (P->Link != UnidadAux)
					{
						P = P->Link;
					}
					if (UnidadAux == PTR1)
					{
						PTR1 = PTR1->Link;
					}
					MostrarEnBotones(Casilla);
					P->Link = UnidadAux->Link;
					UnidadAux = nullptr;
					comboBox1->Items->Remove(Type);
					button9->Enabled = false;
					button10->Enabled = false;
					unidadSiguiente(1,Type);
				}
				if ((Casilla1 == true) && (Casilla2 == true) && (Casilla3 == true))
				{
					if (Casilla4 == false)
					{
						comboBox1->Enabled = false;
						button13->Enabled = true;
						MessageBox::Show("Ahora selecciona tu skin");
					}
				}
			}
			///PARA JUGADOR 2
			else
			{
				if (comboBox2->Text->Equals("Jinete") || comboBox2->Text->Equals("Caballero") || comboBox2->Text->Equals("Luchador") || comboBox2->Text->Equals("Mirmidon") || comboBox2->Text->Equals("Mercenario"))
				{
					Type = Convert::ToString(comboBox2->Text);
					UnidadSelec2 = UnidadAux2;
					Unidad2^ P = gcnew Unidad2();
					P = PTR2;
					while (P->Link != UnidadAux2)
					{
						P = P->Link;
					}
					if (UnidadAux2 == PTR2)
					{
						PTR2 = PTR2->Link;
					}
					MostrarEnBotones(Casilla);
					P->Link = UnidadAux2->Link;
					UnidadAux2 = nullptr;
					comboBox2->Items->Remove(Type);
					button11->Enabled = false;
					button12->Enabled = false;
					unidadSiguiente(2,Type);
				}
				if ((Casilla5 == true) && (Casilla5 == true) && (Casilla7 == true))
				{
					if (Casilla8 == false)
					{
						comboBox2->Enabled = false;
						button15->Enabled = true;
						MessageBox::Show("Ahora selecciona tu skin");
					}
				}
			}
			

			

		}
	
		void PonerEnboton(Button^Boton, int Btn, bool poner)
		{
			if (poner == true)
			{
				if (Btn>=1 && Btn<=3)
				{
					Boton->Text = UnidadAux->Nombre;
					Boton->Enabled = true;
					Boton->BackgroundImage = Image::FromFile(UnidadAux->ImagenURL);
				}
				else
				{
					Boton->Text = UnidadAux2->Nombre;
					Boton->Enabled = true;
					Boton->BackgroundImage = Image::FromFile(UnidadAux2->ImagenURL);
				}

			}
			else
			{
				if (Btn>0 && Btn < 4)
				{
					nuevaUnidad(UnidadSelec1->Nombre, UnidadSelec1->Tipo, UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
				}
				else
				{
					nuevaUnidad2(UnidadSelec2->Nombre, UnidadSelec2->Tipo, UnidadSelec2->ImagenURL, UnidadSelec2->Vida, UnidadSelec2->Ataque, UnidadSelec2->Habilidad, UnidadSelec2->Velocidad, UnidadSelec2->Suerte, UnidadSelec2->Defensa, UnidadSelec2->Movimiento);
				}
				Boton->Text = "";
				Boton->BackgroundImage = Image::FromFile("OC.jpg");
				Boton->Enabled = false;
			}
		}
		
		void MostrarEnBotones(int Boton){
			if (Boton == 1)
			{
				Casilla1 = true;
				ContenidoB1 = UnidadSelec1->Tipo;
				PonerEnboton(button1, Boton, true);
				Listo(1);
			}
			else
			{
				if (Boton == 2)
				{
					Casilla2 = true;
					ContenidoB2 = UnidadSelec1->Tipo;
					PonerEnboton(button2, Boton, true);
					Listo(1);
				}
				else
				{
					if (Boton == 3)
					{
						Casilla3 = true;
						ContenidoB3 = UnidadSelec1->Tipo;
						PonerEnboton(button3, Boton, true);
						Listo(1);
					}
					else
					{
						if (Boton == 5)
						{
							Casilla5 = true;
							ContenidoB5 = UnidadSelec2->Tipo;
							PonerEnboton(button5, Boton, true);
							Listo(2);
						}
						else
						{
							if (Boton == 6)
							{
								Casilla6 = true;
								ContenidoB6 = UnidadSelec2->Tipo;
								PonerEnboton(button6, Boton, true);
								Listo(2);
							}
							else
							{
								if (Boton == 7)
								{
									Casilla7 = true;
									ContenidoB7 = UnidadSelec2->Tipo;
									PonerEnboton(button7, Boton, true);
									Listo(2);
								}
							}
						}
					}
				}
			}

		}
		
		void deSeleccionarSkin(int Jugador){
			if (Jugador == 1)
			{
				nuevoSkin(SkinSelecionado->Nombre, SkinSelecionado->URL, SkinSelecionado->Arma);
				button13->Enabled = true;
				button14->Enabled = true;
				Listo(1);
			}
			else
			{
				nuevoSkin(SkinSelecionado2->Nombre, SkinSelecionado2->URL, SkinSelecionado2->Arma);
				button15->Enabled = true;
				button16->Enabled = true;
				Listo(2);
			}
		}

		void deSeleccion(int Boton)
		{
				if (Boton == 1)
				{
					Casilla1 = false;
					ContenidoB1 = "";
					PonerEnboton(button1, Boton, false);
					Listo(1);
				}
				else
				{
					if (Boton == 2)
					{
						Casilla2 = false;
						ContenidoB2 = "";
						PonerEnboton(button2, Boton, false);
						Listo(1);
					}
					else
					{
						if (Boton == 3)
						{
							Casilla3 = false;
							ContenidoB3 = "";
							PonerEnboton(button3, Boton, false);
							Listo(1);
						}
						else
						{
							if (Boton == 5)
							{
								Casilla5 = false;
								ContenidoB5 = "";
								PonerEnboton(button5, Boton, false);
								Listo(2);
							}
							else
							{
								if (Boton == 6)
								{
									Casilla6 = false;
									ContenidoB6 = "";
									PonerEnboton(button6, Boton, false);
									Listo(2);
								}
								else
								{
									if (Boton == 7)
									{
										Casilla7 = false;
										ContenidoB7 = "";
										PonerEnboton(button7, Boton, false);
										Listo(2);
									}
								}
							}
						}
					}
				}
			}
    
		void Listo(int Jugador){
			switch (Jugador)
			{
			case 1:
				if (Casilla1 == true && Casilla2 == true && Casilla3 == true && Casilla4 == true)
				{
					button17->Enabled = true;
					J1Ready = false;
				}
				else
				{
					button17->Enabled = false;
					J1Ready = false;
					label1->Text = "Estatus: Eligiendo...";
				}
				break;
			case 2:
				if (Casilla5 == true && Casilla6 == true && Casilla7 == true && Casilla8 == true)
				{
					button18->Enabled = true;
					J2Ready = false;
				}
				else
				{
					button18->Enabled = false;
					J2Ready = false;
					label2->Text = "Estatus: Eligiendo...";
				}
				break;
			default:
				MessageBox::Show("What are you trying to do, son?");
				break;
			}
			
		}



#pragma endregion
private: System::Void Juego_Load(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 PlaySound(TEXT("login.wav"), NULL, SND_ASYNC + SND_LOOP);

			 }
			 catch (Exception^ e)
			 {
				 MessageBox::Show("No se encontro la cancion");
			 }			 
			 button1->Enabled = false;
			 button2->Enabled = false;
			 button3->Enabled = false;
			 button4->Enabled = false;
			 button5->Enabled = false;
			 button6->Enabled = false;
			 button7->Enabled = false;
			 button8->Enabled = false;
			 button9->Enabled = false;
			 button10->Enabled = false;
			 button11->Enabled = false;
			 button12->Enabled = false;
			 button13->Enabled = false;
			 button14->Enabled = false;
			 button15->Enabled = false;
			 button16->Enabled = false;
			 button17->Enabled = false;
			 button18->Enabled = false;
			 button17->Text = "Listo!";
			 button18->Text = "Listo!";
			 pictureBox3->Load("VS.png");
			 nuevaUnidad("Astrid", "Jinete", "Astrid.png", 17, 6, 5, 5, 3, 5, 4);
			 nuevaUnidad("Keiran", "Jinete", "Keiran.png", 17, 6, 5, 5, 3, 5, 4);
			 nuevaUnidad("Makalov", "Jinete", "Makalov.png", 17, 6, 5, 5, 3, 5, 4);
			 nuevaUnidad("Brom", "Caballero", "Brom.png",22, 4, 5, 3, 2, 8, 1);
			 nuevaUnidad("Devdan", "Caballero", "Devdan.png", 22, 4, 5, 3, 2, 8, 1);
			 nuevaUnidad("Gatrie", "Caballero", "Gatrie.png", 22, 4, 5, 3, 2, 8, 1);
			 nuevaUnidad("Bastian", "Luchador", "Bastian.png", 19, 7, 4, 6, 2, 3, 2);
			 nuevaUnidad("Giffca", "Luchador", "Giffca.png", 19, 7, 4, 6, 2, 3, 2);
			 nuevaUnidad("Mordecai", "Luchador", "Mordecai.png", 19, 7, 4, 6, 2, 3, 2);
			 nuevaUnidad("Rhys", "Mercenario", "Rhys.png", 15, 5, 5, 5, 2, 5, 2);
			 nuevaUnidad("Rolf", "Mercenario", "Rolf.png", 15, 5, 5, 5, 2, 5, 2);
			 nuevaUnidad("Sothe", "Mercenario", "Sothe.png", 15, 5, 5, 5, 2, 5, 2);
			 nuevaUnidad("Boyd", "Mirmidon", "Boyd.png", 15, 4, 7, 8, 0, 4, 3);
			 nuevaUnidad("Ike", "Mirmidon", "Ike.png", 15, 4, 7, 8, 0, 4, 3);
			 nuevaUnidad("Volke", "Mirmidon", "Volke.png", 15, 4, 7, 8, 0, 4, 3);
			 nuevaUnidad2("Brom", "Caballero", "Brom.png", 22, 4, 5, 3, 2, 8, 1);
			 nuevaUnidad2("Devdan", "Caballero", "Devdan.png", 22, 4, 5, 3, 2, 8, 1);
			 nuevaUnidad2("Gatrie", "Caballero", "Gatrie.png", 22, 4, 5, 3, 2, 8, 1);
			 nuevaUnidad2("Astrid", "Jinete", "Astrid.png", 17, 6, 5, 5, 3, 5, 4);
			 nuevaUnidad2("Keiran", "Jinete", "Keiran.png", 17, 6, 5, 5, 3, 5, 4);
			 nuevaUnidad2("Makalov", "Jinete", "Makalov.png", 17, 6, 5, 5, 3, 5, 4);
			 nuevaUnidad2("Bastian", "Luchador", "Bastian.png", 19, 7, 4, 6, 2, 3, 2);
			 nuevaUnidad2("Giffca", "Luchador", "Giffca.png", 19, 7, 4, 6, 2, 3, 2);
			 nuevaUnidad2("Mordecai", "Luchador", "Mordecai.png", 19, 7, 4, 6, 2, 3, 2);
			 nuevaUnidad2("Rhys", "Mercenario", "Rhys.png", 15, 5, 5, 5, 2, 5, 2);
			 nuevaUnidad2("Rolf", "Mercenario", "Rolf.png", 15, 5, 5, 5, 2, 5, 2);
			 nuevaUnidad2("Sothe", "Mercenario", "Sothe.png", 15, 5, 5, 5, 2, 5, 2);
			 nuevaUnidad2("Boyd", "Mirmidon", "Boyd.png", 15, 4, 7, 8, 0, 4, 3);
			 nuevaUnidad2("Ike", "Mirmidon", "Ike.png", 15, 4, 7, 8, 0, 4, 3);
			 nuevaUnidad2("Volke", "Mirmidon", "Volke.png", 15, 4, 7, 8, 0, 4, 3);
			 
			 nuevoSkin("Ena", "Ena.png", "Hacha");
			 nuevoSkin("Maurim", "Maurim.png", "Hacha");
			 nuevoSkin("Illyana", "Illyana.png", "Hacha");
			 nuevoSkin("Mia", "Mia.png", "Lanza");
			 nuevoSkin("Nasir", "Nasir.png", "Lanza");
			 nuevoSkin("Janaff", "Janaff.png", "Lanza");
			 nuevoSkin("Oscar", "Oscar.png", "Espada");
			 nuevoSkin("Reyson", "Reyson.png", "Espada");
			 nuevoSkin("Jill", "Jill.png", "Espada");
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 button9->Enabled = true;
			 button10->Enabled = true;
			 moverseOPosicionarse();

}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (comboBox1->Text->Equals("Jinete") || comboBox1->Text->Equals("Caballero") || comboBox1->Text->Equals("Mirmidon") || comboBox1->Text->Equals("Luchador") || comboBox1->Text->Equals("Mercenario"))
			 {
				 moverseOPosicionarse();
			 }
			 else
			 {
				 MessageBox::Show("Esta unidad no existe");
			 }
			
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Casilla1 == false)
			 {
				 PersonajeSeleccionado(1);
			 }
			 else
			 {
				 if (Casilla2 == false)
				 {
					 PersonajeSeleccionado(2);
				 }
				 else
				 {
					 if (Casilla3 == false)
					 {
						 PersonajeSeleccionado(3);
					 }
					 else
					 {
						 MessageBox::Show("Ya has seleccionado 3 personajes!");
					 }
				 }
			 }
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 button14->Enabled = true;
			 siguienteSkin(1);
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 seleccionarSkin(1);
			 button14->Enabled = false;
			 if (Casilla1 == true && Casilla2 == true && Casilla3 == true && Casilla4 == true)
			 {
				 button13->Enabled = false;
				 Listo(1);
			 }
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Enabled = true;
			 comboBox1->Items->Add(ContenidoB1);
			 if (ContenidoB1->Equals("Jinete"))
			 {
				 while (!(UnidadSelec1->Tipo->Equals("Jinete")))
				 {
					 UnidadSelec1 = UnidadSelec1->Link;
				 }
				 nuevaUnidad(UnidadSelec1->Nombre, "Jinete", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
			 }
			 else
			 {
				 if (ContenidoB1->Equals("Caballero"))
				 {
					 while (!(UnidadSelec1->Tipo->Equals("Caballero")))
					 {
						 UnidadSelec1 = UnidadSelec1->Link;
					 }
					 nuevaUnidad(UnidadSelec1->Nombre, "Caballero", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
				 }
				 else
				 {
					 if (ContenidoB1->Equals("Mercenario"))
					 {
						 while (!(UnidadSelec1->Tipo->Equals("Mercenario")))
						 {
							 UnidadSelec1 = UnidadSelec1->Link;
						 }
						 nuevaUnidad(UnidadSelec1->Nombre, "Mercenario", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
					 }
					 else
					 {
						 if (ContenidoB1->Equals("Luchador"))
						 {
							 while (!(UnidadSelec1->Tipo->Equals("Luchador")))
							 {
								 UnidadSelec1 = UnidadSelec1->Link;
							 }
							 nuevaUnidad(UnidadSelec1->Nombre, "Luchador", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);

						 }
						 else if (ContenidoB1->Equals("Mirmidon"))
						 {
							 while (!(UnidadSelec1->Tipo->Equals("Mirmidon")))
							 {
								 UnidadSelec1 = UnidadSelec1->Link;
							 }
							 nuevaUnidad(UnidadSelec1->Nombre, "Mirmidon", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
						 }
					 }
				 }
			 }
			 deSeleccion(1);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 deSeleccionarSkin(1);
			 siguienteSkin(1);
			 Casilla4 = false;
			 button4->Text = "";
			 button4->BackgroundImage = Image::FromFile("OC.jpg");
			 button4->Enabled = false;

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Enabled = true;
			 comboBox1->Items->Add(ContenidoB2);
			 if (ContenidoB2->Equals("Jinete"))
			 {
				 while (!(UnidadSelec1->Tipo->Equals("Jinete")))
				 {
					 UnidadSelec1 = UnidadSelec1->Link;
				 }
				 nuevaUnidad(UnidadSelec1->Nombre, "Jinete", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
			 }
			 else
			 {
				 if (ContenidoB2->Equals("Caballero"))
				 {
					 while (!(UnidadSelec1->Tipo->Equals("Caballero")))
					 {
						 UnidadSelec1 = UnidadSelec1->Link;
					 }
					 nuevaUnidad(UnidadSelec1->Nombre, "Caballero", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
				 }
				 else
				 {
					 if (ContenidoB2->Equals("Mercenario"))
					 {
						 while (!(UnidadSelec1->Tipo->Equals("Mercenario")))
						 {
							 UnidadSelec1 = UnidadSelec1->Link;
						 }
						 nuevaUnidad(UnidadSelec1->Nombre, "Mercenario", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
					 }
					 else
					 {
						 if (ContenidoB2->Equals("Luchador"))
						 {
							 while (!(UnidadSelec1->Tipo->Equals("Luchador")))
							 {
								 UnidadSelec1 = UnidadSelec1->Link;
							 }
							 nuevaUnidad(UnidadSelec1->Nombre, "Luchador", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);

						 }
						 else if (ContenidoB2->Equals("Mirmidon"))
						 {
							 while (!(UnidadSelec1->Tipo->Equals("Mirmidon")))
							 {
								 UnidadSelec1 = UnidadSelec1->Link;
							 }
							 nuevaUnidad(UnidadSelec1->Nombre, "Mirmidon", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
						 }
					 }
				 }
			 }
			 deSeleccion(2);

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Enabled = true;
			 comboBox1->Items->Add(ContenidoB3);
			 if (ContenidoB3->Equals("Jinete"))
			 {
				 while (!(UnidadSelec1->Tipo->Equals("Jinete")))
				 {
					 UnidadSelec1 = UnidadSelec1->Link;
				 }
				 nuevaUnidad(UnidadSelec1->Nombre, "Jinete", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
			 }
			 else
			 {
				 if (ContenidoB3->Equals("Caballero"))
				 {
					 while (!(UnidadSelec1->Tipo->Equals("Caballero")))
					 {
						 UnidadSelec1 = UnidadSelec1->Link;
					 }
					 nuevaUnidad(UnidadSelec1->Nombre, "Caballero", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
				 }
				 else
				 {
					 if (ContenidoB3->Equals("Mercenario"))
					 {
						 while (!(UnidadSelec1->Tipo->Equals("Mercenario")))
						 {
							 UnidadSelec1 = UnidadSelec1->Link;
						 }
						 nuevaUnidad(UnidadSelec1->Nombre, "Mercenario", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
					 }
					 else
					 {
						 if (ContenidoB3->Equals("Luchador"))
						 {
							 while (!(UnidadSelec1->Tipo->Equals("Luchador")))
							 {
								 UnidadSelec1 = UnidadSelec1->Link;
							 }
							 nuevaUnidad(UnidadSelec1->Nombre, "Luchador", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);

						 }
						 else if (ContenidoB3->Equals("Mirmidon"))
						 {
							 while (!(UnidadSelec1->Tipo->Equals("Mirmidon")))
							 {
								 UnidadSelec1 = UnidadSelec1->Link;
							 }
							 nuevaUnidad(UnidadSelec1->Nombre, "Mirmidon", UnidadSelec1->ImagenURL, UnidadSelec1->Vida, UnidadSelec1->Ataque, UnidadSelec1->Habilidad, UnidadSelec1->Velocidad, UnidadSelec1->Suerte, UnidadSelec1->Defensa, UnidadSelec1->Movimiento);
						 }
					 }
				 }
			 }
			 deSeleccion(3);
}
//PARA JUGADOR 2
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 button11->Enabled = true;
			 button12->Enabled = true;
			 moverseOPosicionarse2();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 moverseOPosicionarse2();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Casilla5 == false)
			 {
				 PersonajeSeleccionado(5);
			 }
			 else
			 {
				 if (Casilla6 == false)
				 {
					 PersonajeSeleccionado(6);
				 }
				 else
				 {
					 if (Casilla7 == false)
					 {
						 PersonajeSeleccionado(7);
					 }
					 else
					 {
						 MessageBox::Show("Ya has seleccionado 3 personajes!");
					 }
				 }
			 }
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox2->Enabled = true;
			 comboBox2->Items->Add(ContenidoB5);
			 if (ContenidoB5->Equals("Jinete"))
			 {
				 unidadSiguiente(5, "Jinete");
			 }
			 else
			 {
				 if (ContenidoB5->Equals("Caballero"))
				 {
					 unidadSiguiente(5, "Caballero");
				 }
				 else
				 {
					 if (ContenidoB5->Equals("Mercenario"))
					 {
						 unidadSiguiente(5, "Mercenario");
					 }
					 else
					 {
						 if (ContenidoB5->Equals("Luchador"))
						 {
							 unidadSiguiente(5, "Luchador");

						 }
						 else if (ContenidoB5->Equals("Mirmidon"))
						 {
							 unidadSiguiente(5, "Mirmidon");
						 }
					 }
				 }
			 }
			 deSeleccion(5);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox2->Enabled = true;
			 comboBox2->Items->Add(ContenidoB6);
			 if (ContenidoB6->Equals("Jinete"))
			 {
				 unidadSiguiente(6, "Jinete");
			 }
			 else
			 {
				 if (ContenidoB6->Equals("Caballero"))
				 {
					 unidadSiguiente(6, "Caballero");
				 }
				 else
				 {
					 if (ContenidoB6->Equals("Mercenario"))
					 {
						 unidadSiguiente(6, "Mercenario");
					 }
					 else
					 {
						 if (ContenidoB6->Equals("Luchador"))
						 {
							 unidadSiguiente(6, "Luchador");

						 }
						 else if (ContenidoB6->Equals("Mirmidon"))
						 {
							 unidadSiguiente(6, "Mirmidon");
						 }
					 }
				 }
			 }
			 deSeleccion(6);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox2->Enabled = true;
			 comboBox2->Items->Add(ContenidoB7);
			 if (ContenidoB7->Equals("Jinete"))
			 {
				 unidadSiguiente(7, "Jinete");
			 }
			 else
			 {
				 if (ContenidoB7->Equals("Caballero"))
				 {
					 unidadSiguiente(7, "Caballero");
				 }
				 else
				 {
					 if (ContenidoB7->Equals("Mercenario"))
					 {
						 unidadSiguiente(7, "Mercenario");
					 }
					 else
					 {
						 if (ContenidoB7->Equals("Luchador"))
						 {
							 unidadSiguiente(7, "Luchador");

						 }
						 else if (ContenidoB7->Equals("Mirmidon"))
						 {
							 unidadSiguiente(7, "Mirmidon");
						 }
					 }
				 }
			 }
			 deSeleccion(7);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 deSeleccionarSkin(2);
			 siguienteSkin(2);
			 Casilla8 = false;
			 button8->Text = "";
			 button8->BackgroundImage = Image::FromFile("OC.jpg");
			 button8->Enabled = false;

}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 button16->Enabled = true;
			 siguienteSkin(2);
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 seleccionarSkin(2);
			 button16->Enabled = false;
			 if (Casilla5 == true && Casilla5 == true && Casilla7 == true && Casilla8 == true)
			 {
				 button15->Enabled = false;
				 Listo(2);
			 }
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 J2Ready = true;
			 label2->Text = "Estatus: Listo!";
			 MessageBox::Show("JUGADOR 2 ESTA LISTO PARA EL COMBATE!");
			 button18->Enabled = false;
			 comboBox2->Enabled = false;
			 if ((J1Ready == J2Ready) == true)
			 {
				 MessageBox::Show("*inicia el juego*");
			 }
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 J1Ready = true;
			 label1->Text = "Estatus: Listo!";
			 comboBox1->Enabled = false;
			 MessageBox::Show("JUGADOR 1 ESTA LISTO PARA EL COMBATE!");
			 button17->Enabled = false;
			 if ((J1Ready == J2Ready) == true)
			 {
				 MessageBox::Show("*inicia el juego*");
				
			 }
}
		 //RADIOBUTTONS
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton6->Checked == true)
			 {
				 siguienteSkin(2);
			 }
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton5->Checked == true)
			 {
				 siguienteSkin(2);
			 }
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton4->Checked == true)
			 {
				 siguienteSkin(2);
			 }
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton3->Checked == true)
			 {
				 siguienteSkin(1);
			 }
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton2->Checked == true)
			 {
				 siguienteSkin(1);
			 }
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton1->Checked == true)
			 {
				 siguienteSkin(1);
			 }
}

		 //Weas que se activaron por error
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
