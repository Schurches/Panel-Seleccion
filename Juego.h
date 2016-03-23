#pragma once

namespace SeleccionYJuego {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;


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
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 230);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(219, 147);
			this->listBox1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(2, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 426);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Jugador 1";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button14);
			this->groupBox5->Controls->Add(this->button13);
			this->groupBox5->Controls->Add(this->radioButton3);
			this->groupBox5->Controls->Add(this->radioButton2);
			this->groupBox5->Controls->Add(this->radioButton1);
			this->groupBox5->Location = System::Drawing::Point(249, 230);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(117, 173);
			this->groupBox5->TabIndex = 21;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Jugador 1";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(6, 144);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(105, 23);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Seleccionar";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Juego::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(6, 89);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 3;
			this->button13->Text = L"Next Skin";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Juego::button13_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 66);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(61, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Espada";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Lanza";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(57, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Hacha";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Location = System::Drawing::Point(231, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(135, 116);
			this->groupBox4->TabIndex = 20;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Seleccionar unidad";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(7, 76);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 23);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Seleccionar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Juego::button10_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Jinete", L"Caballero", L"Luchador", L"Mercenario",
					L"Mirmidon"
			});
			this->comboBox1->Location = System::Drawing::Point(7, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(112, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Juego::comboBox1_SelectedIndexChanged);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(6, 47);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(113, 23);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Next Character";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Juego::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(219, 191);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox6);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Location = System::Drawing::Point(689, 23);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(383, 426);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Jugador 2";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button16);
			this->groupBox6->Controls->Add(this->radioButton4);
			this->groupBox6->Controls->Add(this->button15);
			this->groupBox6->Controls->Add(this->radioButton6);
			this->groupBox6->Controls->Add(this->radioButton5);
			this->groupBox6->Location = System::Drawing::Point(20, 237);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(117, 166);
			this->groupBox6->TabIndex = 23;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Jugador 2";
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(7, 137);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(104, 23);
			this->button16->TabIndex = 25;
			this->button16->Text = L"Seleccionar";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(57, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Hacha";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(6, 88);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 24;
			this->button15->Text = L"Next Skin";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 65);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(61, 17);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Espada";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 42);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(54, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Lanza";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Location = System::Drawing::Point(20, 25);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(131, 110);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Seleccionar Unidad";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(6, 76);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(119, 23);
			this->button12->TabIndex = 25;
			this->button12->Text = L"Seleccionar";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 47);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(119, 23);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Next Character";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Jinete", L"Caballero", L"Luchador", L"Mercenario",
					L"Mirmidon"
			});
			this->comboBox2->Location = System::Drawing::Point(7, 20);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(118, 21);
			this->comboBox2->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(157, 230);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(219, 147);
			this->listBox2->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(157, 19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(218, 191);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(392, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 64);
			this->button1->TabIndex = 13;
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Juego::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(392, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 64);
			this->button2->TabIndex = 14;
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Location = System::Drawing::Point(392, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 64);
			this->button3->TabIndex = 15;
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(392, 385);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 64);
			this->button4->TabIndex = 16;
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Juego::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(604, 33);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 64);
			this->button5->TabIndex = 17;
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(604, 132);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 64);
			this->button6->TabIndex = 18;
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(604, 274);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(79, 64);
			this->button7->TabIndex = 19;
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(604, 385);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(79, 64);
			this->button8->TabIndex = 20;
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(525, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"VS";
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 461);
			this->Controls->Add(this->label2);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		///////////DECLARANDO SKINS DEL JUGADOR
		ref struct Skin
		{
			String^URL;
			String^Nombre;
			String^Arma;
			Skin^Link;
		};
		static Skin^PTR6 = nullptr;
		static Skin^SkinPlayer = nullptr;
		static Skin^SkinSelecionado = nullptr;

		//////////////////////////////////////////////DECLARANDO LAS CARACTERISTICAS DE LOS PERSONAJES
		//Jinete
		ref struct Jinete
		{
			String^Nombre;
			String^ImagenURL;
			int Vida = 17;
			int Ataque = 6;
			int Habilidad = 5;
			int Velocidad = 5;
			int Suerte = 3;
			int Defensa = 5;
			int Movimiento = 4;
			Jinete^Link;
		};
		//Caballero
		ref struct Caballero
		{
			String^Nombre;
			String^ImagenURL;
			int Vida = 22;
			int Ataque = 4;
			int Habilidad = 5;
			int Velocidad = 3;
			int Suerte = 2;
			int Defensa = 8;
			int Movimiento = 1;
			Caballero^Link;
		};
		//Luchador
		ref struct Luchador
		{
			String^Nombre;
			String^ImagenURL;
			int Vida = 19;
			int Ataque = 7;
			int Habilidad = 4;
			int Velocidad = 6;
			int Suerte = 2;
			int Defensa = 3;
			int Movimiento = 2;
			Luchador^Link;
		};
		//Mercenario
		ref struct Mercenario
		{
			String^Nombre;
			String^ImagenURL;
			int Vida = 15;
			int Ataque = 5;
			int Habilidad = 5;
			int Velocidad = 5;
			int Suerte = 2;
			int Defensa = 5;
			int Movimiento = 2;
			Mercenario^Link;
		};
		//Mirmidon
		ref struct Mirmidon
		{
			String^Nombre;
			String^ImagenURL;
			int Vida = 15;
			int Ataque = 4;
			int Habilidad = 7;
			int Velocidad = 8;
			int Suerte = 0;
			int Defensa = 4;
			int Movimiento = 3;
			Mirmidon^Link;
		};
		//Jugador


		//Listas PTR y nodos auxiliares
		static Jinete^PTR1 = nullptr;
		static Jinete^ JinAux = nullptr;
		static Caballero^PTR2 = nullptr;
		static Caballero^CabAux = nullptr;
		static Luchador^PTR3 = nullptr;
		static Luchador^LuchAux = nullptr;
		static Mercenario^PTR4 = nullptr;
		static Mercenario^MerAux = nullptr;
		static Mirmidon^PTR5 = nullptr;
		static Mirmidon^MirAux = nullptr;
		//Contadores de personajes por lista
		int ContJin = 0, ContCab = 0, ContLuch = 0, ContMer = 0, ContMir = 0, ContSkin=0;
		//Booleanos de casillas ocupadas
		bool Casilla1 = false, Casilla2 = false, Casilla3 = false, Casilla4 = false;

		////////////////MOSTRAR INFORMACION DEL PRIMER PERSONAJE DE LA LISTA (ESTO SUCEDE CUANDO SE DA CLICK A ALGUN ITEM DEL COMBOBOX)
		////////////////SIGUIENTE SKIN
		void siguienteSkin(){
			if (SkinPlayer==nullptr)
			{
				SkinPlayer = PTR6;
			}
			else
			{
				SkinPlayer = SkinPlayer->Link;
			}
			listBox1->Items->Clear();
			listBox1->Items->Add("SKIN: " + SkinPlayer->Nombre);
			pictureBox1->Load(SkinPlayer->URL);
		}
		

		////////////////ESTO TAMBIEN SIRVE PARA CUANDO PASAN AL SIGUIENTE PERSONAJE DE ALGUNA DE LAS UNIDADES
		///////////////PARA JINETE
		void siguienteJinete(){
			if (JinAux == nullptr)
			{
				JinAux = PTR1;
			}
			else
			{
				JinAux = JinAux->Link;
			}
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + JinAux->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + JinAux->Vida + " LP");
			listBox1->Items->Add("Ataque: " + JinAux->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + JinAux->Habilidad);
			listBox1->Items->Add("Velocidad: " + JinAux->Velocidad);
			listBox1->Items->Add("Suerte: " + JinAux->Suerte);
			listBox1->Items->Add("Defensa: " + JinAux->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + JinAux->Movimiento + " Casillas");
			pictureBox1->Load(JinAux->ImagenURL);
		}
		////////////PARA CABALLERO
		void siguienteCaballero(){
			if (CabAux == nullptr)
			{
				CabAux = PTR2;
			}
			else
			{
				CabAux = CabAux->Link;
			}
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + CabAux->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + CabAux->Vida + " LP");
			listBox1->Items->Add("Ataque: " + CabAux->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + CabAux->Habilidad);
			listBox1->Items->Add("Velocidad: " + CabAux->Velocidad);
			listBox1->Items->Add("Suerte: " + CabAux->Suerte);
			listBox1->Items->Add("Defensa: " + CabAux->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + CabAux->Movimiento + " Casillas");
			pictureBox1->Load(CabAux->ImagenURL);
		}
		////////////PARA LUCHADOR
		void siguienteLuchador(){
			if (LuchAux == nullptr)
			{
				LuchAux = PTR3;
			}
			else
			{
				LuchAux = LuchAux->Link;
			}
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + LuchAux->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + LuchAux->Vida + " LP");
			listBox1->Items->Add("Ataque: " + LuchAux->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + LuchAux->Habilidad);
			listBox1->Items->Add("Velocidad: " + LuchAux->Velocidad);
			listBox1->Items->Add("Suerte: " + LuchAux->Suerte);
			listBox1->Items->Add("Defensa: " + LuchAux->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + LuchAux->Movimiento + " Casillas");
			pictureBox1->Load(LuchAux->ImagenURL);
		}
		////////////PARA MERCENARIO
		void siguienteMercenario(){
			if (MerAux == nullptr)
			{
				MerAux = PTR4;
			}
			else
			{
				MerAux = MerAux->Link;
			}
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + MerAux->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + MerAux->Vida + " LP");
			listBox1->Items->Add("Ataque: " + MerAux->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + MerAux->Habilidad);
			listBox1->Items->Add("Velocidad: " + MerAux->Velocidad);
			listBox1->Items->Add("Suerte: " + MerAux->Suerte);
			listBox1->Items->Add("Defensa: " + MerAux->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + MerAux->Movimiento + " Casillas");
			pictureBox1->Load(MerAux->ImagenURL);
		}
		////////////PARA MIRMIDOR
		void siguienteMirmidor(){
			if (MirAux == nullptr)
			{
				MirAux = PTR5;
			}
			else
			{
				MirAux = MirAux->Link;
			}
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + MirAux->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + MirAux->Vida + " LP");
			listBox1->Items->Add("Ataque: " + MirAux->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + MirAux->Habilidad);
			listBox1->Items->Add("Velocidad: " + MirAux->Velocidad);
			listBox1->Items->Add("Suerte: " + MirAux->Suerte);
			listBox1->Items->Add("Defensa: " + MirAux->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + MirAux->Movimiento + " Casillas");
			pictureBox1->Load(MirAux->ImagenURL);
		}










		/////////////////////////////////////////////////////CON LISTA ENLAZADA CIRCULAR
		//////////////////////////CREANDO NUEVO SKIN
		void nuevoSkin(String^Name, String^URL){
			ContSkin++;
			Skin^P = gcnew Skin();
			P->Nombre = Name;
			P->URL = URL;
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

		//////////////////////////CREANDO NUEVO PERSONAJE
		//JINETE
		void nuevoJinete(String^Name, String^URL){
			Jinete^ P = gcnew Jinete();
			P->Nombre = Name;
			P->ImagenURL = URL;
			if (PTR1 == nullptr)
			{
				PTR1 = P;
				PTR1->Link = PTR1;
				P = nullptr;
			}
			else
			{
				Jinete^ Q = gcnew Jinete();
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
			ContJin++;
		}
		//CABALLERO
		void nuevoCaballero(String^Name, String^ URL){
			ContCab++;
			Caballero^ P = gcnew Caballero();
			P->Nombre = Name;
			P->ImagenURL = URL;
			if (PTR2 == nullptr)
			{
				PTR2 = P;
				PTR2->Link = PTR2;
				P = nullptr;
			}
			else
			{
				Caballero^ Q = gcnew Caballero();
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
		//LUCHADOR
		void nuevoLuchador(String^Name, String^URL){
			ContLuch++;
			Luchador^ P = gcnew Luchador();
			P->Nombre = Name;
			P->ImagenURL = URL;
			if (PTR3 == nullptr)
			{
				PTR3 = P;
				PTR3->Link = PTR3;
				P = nullptr;
			}
			else
			{
				Luchador^ Q = gcnew Luchador();
				Q = PTR3;
				while (Q->Link != PTR3)
				{
					Q = Q->Link;
				}
				Q->Link = P;
				P->Link = PTR3;
				Q = nullptr;
				P = nullptr;
			}
		}
		//MERCENARIO
		void nuevoMercenario(String^Name, String^URL){
			ContMer++;
			Mercenario^ P = gcnew Mercenario();
			P->Nombre = Name;
			P->ImagenURL = URL;
			if (PTR4 == nullptr)
			{
				PTR4 = P;
				PTR4->Link = PTR4;
				P = nullptr;
			}
			else
			{
				Mercenario^ Q = gcnew Mercenario();
				Q = PTR4;
				while (Q->Link != PTR4)
				{
					Q = Q->Link;
				}
				Q->Link = P;
				P->Link = PTR4;
				Q = nullptr;
				P = nullptr;
			}
		}
		//MIRMIDON
		void nuevoMirmidon(String^Name, String^URL){
			ContMir++;
			Mirmidon^ P = gcnew Mirmidon();
			P->Nombre = Name;
			P->ImagenURL = URL;
			if (PTR5 == nullptr)
			{
				PTR5 = P;
				PTR5->Link = PTR5;
				P = nullptr;
			}
			else
			{
				Mirmidon^ Q = gcnew Mirmidon();
				Q = PTR5;
				while (Q->Link != PTR5)
				{
					Q = Q->Link;
				}
				Q->Link = P;
				P->Link = PTR5;
				Q = nullptr;
				P = nullptr;
			}
		}
		////////////////SUBRUTINA PARA CAMBIAR INFORMACION DE PERSONAJE CADA VEZ QUE SE SELECCIONA UNA UNIDAD EN EL COMBOBOX
		void moverseOPosicionarse(){
			if (comboBox1->SelectedItem->Equals("Jinete"))
			{
				siguienteJinete();
			}
			if (comboBox1->SelectedItem->Equals("Caballero"))
			{
				siguienteCaballero();
			}
			if (comboBox1->SelectedItem->Equals("Luchador"))
			{
				siguienteLuchador();
			}
			if (comboBox1->SelectedItem->Equals("Mercenario"))
			{
				siguienteMercenario();
			}
			if (comboBox1->SelectedItem->Equals("Mirmidon"))
			{
				siguienteMirmidor();
			}
		}
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////SELECCION DE SKINS
		void seleccionarSkin(){
			SkinSelecionado = SkinPlayer;
			Skin^P = gcnew Skin();
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
			///Poniendo el arma en el nodo
			if (radioButton1->Checked == true)
			{
				SkinPlayer->Arma = radioButton1->Text;
			}
			else
			{
				if (radioButton2->Checked == true)
				{
					SkinPlayer->Arma = radioButton2->Text;
				}
				else
				{
					SkinPlayer->Arma = radioButton3->Text;
				}
			}
			button4->Enabled = true;
			button4->BackgroundImage = Image::FromFile(SkinPlayer->URL);
			button4->Text = SkinPlayer->Nombre;
			MessageBox::Show("Seleccionaste el arma: '" + SkinPlayer->Arma + "' y el skin: '" + SkinPlayer->Nombre + "'");
			Casilla4 = true;
			P = nullptr;
			SkinPlayer = nullptr;
		}
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////SUBRUTINA PARA SELECCIONAR ALGUN PERSONAJE 
		void PersonajeSeleccionado(int Casilla){
			if (comboBox1->SelectedItem->Equals("Jinete"))
			{
				Jinete^ P = gcnew Jinete();
				P = PTR1;
				while (P->Link != JinAux)
				{
					P = P->Link;
				}
				MostrarEnBotonesJIN(Casilla);
				P->Link = JinAux->Link;
				JinAux = nullptr;
				comboBox1->Items->Remove("Jinete");
				button9->Enabled = false;
				button10->Enabled = false;
			}
			else
			{
				if (comboBox1->SelectedItem->Equals("Caballero"))
				{
					Caballero^ P = gcnew Caballero();
					P = PTR2;
					while (P->Link != CabAux)
					{
						P = P->Link;
					}
					MostrarEnBotonesCAB(Casilla);
					P->Link = CabAux->Link;
					CabAux = nullptr;
					comboBox1->Items->Remove("Caballero");
					button9->Enabled = false;
					button10->Enabled = false;
				}
				else
				{
					if (comboBox1->SelectedItem->Equals("Luchador"))
					{
						Luchador^ P = gcnew Luchador();
						P = PTR3;
						while (P->Link != LuchAux)
						{
							P = P->Link;
						}
						MostrarEnBotonesLUCH(Casilla);
						P->Link = LuchAux->Link;
						LuchAux = nullptr;
						comboBox1->Items->Remove("Luchador");
						button9->Enabled = false;
						button10->Enabled = false;
					}
					else
					{
						if (comboBox1->SelectedItem->Equals("Mercenario"))
						{
							Mercenario^ P = gcnew Mercenario();
							P = PTR4;
							while (P->Link != MerAux)
							{
								P = P->Link;
							}
							MostrarEnBotonesMER(Casilla);
							P->Link = MerAux->Link;
							MerAux = nullptr;
							comboBox1->Items->Remove("Mercenario");
							button9->Enabled = false;
							button10->Enabled = false;
						}
						else
						{
							if (comboBox1->SelectedItem->Equals("Mirmidon"))
							{
								Mirmidon^ P = gcnew Mirmidon();
								P = PTR5;
								while (P->Link != MirAux)
								{
									P = P->Link;
								}
								MostrarEnBotonesMIR(Casilla);
								P->Link = MirAux->Link;
								MirAux = nullptr;
								comboBox1->Items->Remove("Mirmidon");
								button9->Enabled = false;
								button10->Enabled = false;
							}
						}
					}
				}
			}
			if ((Casilla1 == true) && (Casilla2 == true) && (Casilla3 == true))
			{
				comboBox1->Enabled = false;
				button13->Enabled = true;
				MessageBox::Show("Ahora selecciona tu skin");
			}

		}
		/////////////////////////////////SUBRUTINA PARA COLOCAR PERSONAJE ELEGIDO EN UN BOTON
		////////SI SE ELIGIO UN JINETE
		void MostrarEnBotonesJIN(int Boton){
			if (Boton == 1)
			{
				button1->Text = JinAux->Nombre;
				button1->Enabled = true;
				button1->BackgroundImage = Image::FromFile(JinAux->ImagenURL);
				Casilla1 = true;
			}
			else
			{
				if (Boton == 2)
				{
					button2->Text = JinAux->Nombre;
					button2->Enabled = true;
					button2->BackgroundImage = Image::FromFile(JinAux->ImagenURL);
					Casilla2 = true;
				}
				else
				{
					if (Boton == 3)
					{
						button3->Text = JinAux->Nombre;
						button3->Enabled = true;
						button3->BackgroundImage = Image::FromFile(JinAux->ImagenURL);
						Casilla3 = true;
					}
				}
			}

		}
		////////SI SE ELIGIO UN CABALLERO
		void MostrarEnBotonesCAB(int Boton){
			if (Boton == 1)
			{
				button1->Text = CabAux->Nombre;
				button1->Enabled = true;
				button1->BackgroundImage = Image::FromFile(CabAux->ImagenURL);
				Casilla1 = true;
			}
			else
			{
				if (Boton == 2)
				{
					button2->Text = CabAux->Nombre;
					button2->Enabled = true;
					button2->BackgroundImage = Image::FromFile(CabAux->ImagenURL);
					Casilla2 = true;
				}
				else
				{
					if (Boton == 3)
					{
						button3->Text = CabAux->Nombre;
						button3->Enabled = true;
						button3->BackgroundImage = Image::FromFile(CabAux->ImagenURL);
						Casilla3 = true;
					}
				}
			}
		}
		//////////////////////SI SE ELIGIO UN LUCHADOR
		void MostrarEnBotonesLUCH(int Boton){
			if (Boton == 1)
			{
				button1->Text = LuchAux->Nombre;
				button1->Enabled = true;
				button1->BackgroundImage = Image::FromFile(LuchAux->ImagenURL);
				Casilla1 = true;
			}
			else
			{
				if (Boton == 2)
				{
					button2->Text = LuchAux->Nombre;
					button2->Enabled = true;
					button2->BackgroundImage = Image::FromFile(LuchAux->ImagenURL);
					Casilla2 = true;
				}
				else
				{
					if (Boton == 3)
					{
						button3->Text = LuchAux->Nombre;
						button3->Enabled = true;
						button3->BackgroundImage = Image::FromFile(LuchAux->ImagenURL);
						Casilla3 = true;
					}
				}
			}
		}
			//////////////////SI SE ELIGIO UN MERCENARIO
			void MostrarEnBotonesMER(int Boton){
				if (Boton == 1)
				{
					button1->Text = MerAux->Nombre;
					button1->Enabled = true;
					button1->BackgroundImage = Image::FromFile(MerAux->ImagenURL);
					Casilla1 = true;
				}
				else
				{
					if (Boton == 2)
					{
						button2->Text = MerAux->Nombre;
						button2->Enabled = true;
						button2->BackgroundImage = Image::FromFile(MerAux->ImagenURL);
						Casilla2 = true;
					}
					else
					{
						if (Boton == 3)
						{
							button3->Text = MerAux->Nombre;
							button3->Enabled = true;
							button3->BackgroundImage = Image::FromFile(MerAux->ImagenURL);
							Casilla3 = true;
						}
					}
				}
			}
			/////////////SI SE ELIGIO UN MIRMIDOR
			void MostrarEnBotonesMIR(int Boton){
				if (Boton == 1)
				{
					button1->Text = MirAux->Nombre;
					button1->Enabled = true;
					button1->BackgroundImage = Image::FromFile(MirAux->ImagenURL);
					Casilla1 = true;
				}
				else
				{
					if (Boton == 2)
					{
						button2->Text = MirAux->Nombre;
						button2->Enabled = true;
						button2->BackgroundImage = Image::FromFile(MirAux->ImagenURL);
						Casilla2 = true;
					}
					else
					{
						if (Boton == 3)
						{
							button3->Text = MirAux->Nombre;
							button3->Enabled = true;
							button3->BackgroundImage = Image::FromFile(MirAux->ImagenURL);
							Casilla3 = true;
						}
					}
				}
			}
			////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			//////DESELECCIONAR SKIN
			void deSeleccionarSkin(){
				nuevoSkin(SkinSelecionado->Nombre,SkinSelecionado->URL);
				button13->Enabled = true;
				button14->Enabled = true;
			}
		
		

		

















		///sadasdadasdasd//
		void mostrar1(){
			Jinete^P = gcnew Jinete();
			P = PTR1;
			for (int i = 0; i < ContJin; i++)
			{
				MessageBox::Show(P->Nombre);
				P = P->Link;
			}
			P = nullptr;
		}
		void mostrar2(){
			Caballero^P = gcnew Caballero();
			P = PTR2;
			for (int i = 0; i < ContCab; i++)
			{
				MessageBox::Show(P->Nombre);
				P = P->Link;
			}
			P = nullptr;
		}
		void mostrar3(){
			Luchador^P = gcnew Luchador();
			P = PTR3;
			for (int i = 0; i < ContLuch; i++)
			{
				MessageBox::Show(P->Nombre);
				P = P->Link;
			}
			P = nullptr;
		}
		void mostrar4(){
			Mercenario^P = gcnew Mercenario();
			P = PTR4;
			for (int i = 0; i < ContMer; i++)
			{
				MessageBox::Show(P->Nombre);
				P = P->Link;
			}
			P = nullptr;
		}
		void mostrar5(){
			Mirmidon^P = gcnew Mirmidon();
			P = PTR5;
			for (int i = 0; i < ContMir; i++)
			{
				MessageBox::Show(P->Nombre);
				P = P->Link;
			}
			P = nullptr;
		}





#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 button9->Enabled = true;
			 button10->Enabled = true;
			 moverseOPosicionarse();

}
private: System::Void Juego_Load(System::Object^  sender, System::EventArgs^  e) {
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
			 nuevoJinete("Gildarts","Chucho.png");
			 nuevoJinete("Agro", "Chucho.png");
			 nuevoJinete("Wander", "Chucho.png");
			 nuevoCaballero("Gan fall", "Chucho2.png");
			 nuevoCaballero("Kyros", "Chucho2.png");
			 nuevoLuchador("Neptuno", "Chucho3.png");
			 nuevoMercenario("Leon", "Chucho4.png");
			 nuevoMercenario("Ada", "Chucho4.png");
			 nuevoMercenario("Krauser", "Chucho4.png");
			 nuevoMercenario("Wesker", "Chucho4.png");
			 nuevoMercenario("Crocodile", "Chucho4.png");
			 nuevoMirmidon("Lacayo1", "Chucho5.png");
			 nuevoMirmidon("Lacayo2", "Chucho5.png");
			 nuevoMirmidon("Lacayo3", "Chucho5.png");
			 nuevoMirmidon("Lacayo4", "Chucho5.png");
			 nuevoMirmidon("Lacayo6", "Chucho5.png");
			 nuevoMirmidon("Lacayo7", "Chucho5.png");
			 nuevoMirmidon("Lacayo8", "Chucho5.png");
			 nuevoMirmidon("Lacayo9", "Chucho5.png");
			 nuevoMirmidon("Lacayo10", "Chucho5.png");
			 nuevoMirmidon("Lacayo11", "Chucho5.png");
			 nuevoMirmidon("Lacayo12", "Chucho5.png");
			 nuevoSkin("Luffy","Luffy.png");
			 nuevoSkin("Nami", "Nami.jpg");
			 nuevoSkin("Zoro", "Zoro.png");
			 nuevoSkin("Sanji", "Sanji.png");
			 /*
			 mostrar1();
			 mostrar2();
			 mostrar3();
			 mostrar4();
			 mostrar5();
			 */
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 moverseOPosicionarse();
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
			 siguienteSkin();
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 seleccionarSkin();
			 if (Casilla1 == Casilla2 == Casilla3 == Casilla4)
			 {
				 MessageBox::Show("JUGADOR 1 ESTA LISTO PARA EL COMBATE!");
				 button13->Enabled = false;
				 button14->Enabled = false;

			 }
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 siguienteSkin();
			 deSeleccionarSkin();
			 Casilla4 = false;
			 button4->Text = "";
			 button4->BackgroundImage = Image::FromFile("OC.jpg");
			 button4->Enabled = false;

}
};
}
