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
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
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
			this->groupBox5->Controls->Add(this->button13);
			this->groupBox5->Controls->Add(this->radioButton3);
			this->groupBox5->Controls->Add(this->radioButton2);
			this->groupBox5->Controls->Add(this->radioButton1);
			this->groupBox5->Location = System::Drawing::Point(249, 230);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(117, 134);
			this->groupBox5->TabIndex = 21;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Jugador 1";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(7, 105);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 3;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 68);
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
			this->radioButton2->Location = System::Drawing::Point(7, 45);
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
			this->radioButton1->Location = System::Drawing::Point(7, 21);
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
			this->groupBox6->Controls->Add(this->button14);
			this->groupBox6->Controls->Add(this->radioButton4);
			this->groupBox6->Controls->Add(this->radioButton6);
			this->groupBox6->Controls->Add(this->radioButton5);
			this->groupBox6->Location = System::Drawing::Point(20, 237);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(117, 127);
			this->groupBox6->TabIndex = 23;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Jugador 2";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(7, 97);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 6;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(57, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Hacha";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 65);
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
			this->radioButton5->Location = System::Drawing::Point(6, 42);
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
			this->button1->Location = System::Drawing::Point(392, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 64);
			this->button1->TabIndex = 13;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(392, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 64);
			this->button2->TabIndex = 14;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(392, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 64);
			this->button3->TabIndex = 15;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(392, 385);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 64);
			this->button4->TabIndex = 16;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(604, 33);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 64);
			this->button5->TabIndex = 17;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(604, 132);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 64);
			this->button6->TabIndex = 18;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(604, 274);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(79, 64);
			this->button7->TabIndex = 19;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(604, 385);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(79, 64);
			this->button8->TabIndex = 20;
			this->button8->Text = L"button8";
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


		//////////////////////////////////////////////DECLARANDO LOS PERSONAJES
		//Jinete
		ref struct Jinete
		{
			String^Nombre;
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


		//Listas
		static Jinete^PTR1 = nullptr;
		static Caballero^PTR2 = nullptr;
		static Luchador^PTR3 = nullptr;
		static Mercenario^PTR4 = nullptr;
		static Mirmidon^PTR5 = nullptr;
		//Contadores de personajes por lista
		int ContJin = 0, ContCab = 0, ContLuch = 0, ContMer = 0, ContMir = 0;
		////////////////////////////////////////////////////CON LISTA ENLAZADA CIRCULAR
		//////////////////////////CREANDO NUEVO PERSONAJE
		//JINETE
		void nuevoJinete(String^Name){
			Jinete^ P = gcnew Jinete();
			P->Nombre = Name;
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
		void nuevoCaballero(String^Name){
			ContCab++;
			Caballero^ P = gcnew Caballero();
			P->Nombre = Name;
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
		void nuevoLuchador(String^Name){
			ContLuch++;
			Luchador^ P = gcnew Luchador();
			P->Nombre = Name;
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
		void nuevoMercenario(String^Name){
			ContMer++;
			Mercenario^ P = gcnew Mercenario();
			P->Nombre = Name;
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
		void nuevoMirmidon(String^Name){
			ContMir++;
			Mirmidon^ P = gcnew Mirmidon();
			P->Nombre = Name;
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
		////////////////MOSTRAR INFORMACION DEL PRIMER PERSONAJE DE LA LISTA (ESTO SUCEDE CUANDO SE DA CLICK A ALGUN ITEM DEL COMBOBOX)
		////////////PARA JINETE
		void primerJinete(){
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + PTR1->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + PTR1->Vida + " LP");
			listBox1->Items->Add("Ataque: " + PTR1->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + PTR1->Habilidad);
			listBox1->Items->Add("Velocidad: " + PTR1->Velocidad);
			listBox1->Items->Add("Suerte: " + PTR1->Suerte);
			listBox1->Items->Add("Defensa: " + PTR1->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + PTR1->Movimiento + " Casillas");
			pictureBox1->Load("Chucho.png");
		}

		////////////PARA CABALLERO
		void primerCaballero(){
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + PTR2->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + PTR2->Vida + " LP");
			listBox1->Items->Add("Ataque: " + PTR2->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + PTR2->Habilidad);
			listBox1->Items->Add("Velocidad: " + PTR2->Velocidad);
			listBox1->Items->Add("Suerte: " + PTR2->Suerte);
			listBox1->Items->Add("Defensa: " + PTR2->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + PTR2->Movimiento + " Casillas");
			pictureBox1->Load("Chucho2.png");
		}
		////////////PARA LUCHADOR
		void primerLuchador(){
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + PTR3->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + PTR3->Vida + " LP");
			listBox1->Items->Add("Ataque: " + PTR3->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + PTR3->Habilidad);
			listBox1->Items->Add("Velocidad: " + PTR3->Velocidad);
			listBox1->Items->Add("Suerte: " + PTR3->Suerte);
			listBox1->Items->Add("Defensa: " + PTR3->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + PTR3->Movimiento + " Casillas");
			pictureBox1->Load("Chucho3.png");
		}

		////////////PARA MERCENARIO
		void primerMercenario(){
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + PTR4->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + PTR4->Vida + " LP");
			listBox1->Items->Add("Ataque: " + PTR4->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + PTR4->Habilidad);
			listBox1->Items->Add("Velocidad: " + PTR4->Velocidad);
			listBox1->Items->Add("Suerte: " + PTR4->Suerte);
			listBox1->Items->Add("Defensa: " + PTR4->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + PTR4->Movimiento + " Casillas");
			pictureBox1->Load("Chucho4.png");
		}

		////////////PARA MIRMIDOR
		void primerMirmidor(){
			listBox1->Items->Clear();
			listBox1->Items->Add("Personaje: " + PTR5->Nombre);
			listBox1->Items->Add("Puntos de Vida: " + PTR5->Vida + " LP");
			listBox1->Items->Add("Ataque: " + PTR5->Ataque + " Puntos");
			listBox1->Items->Add("Habilidad: " + PTR5->Habilidad);
			listBox1->Items->Add("Velocidad: " + PTR5->Velocidad);
			listBox1->Items->Add("Suerte: " + PTR5->Suerte);
			listBox1->Items->Add("Defensa: " + PTR5->Defensa + " Puntos");
			listBox1->Items->Add("Capacidad de Movimiento: " + PTR5->Movimiento + " Casillas");
			pictureBox1->Load("Chucho5.png");
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
			 if (comboBox1->SelectedItem->Equals("Jinete"))
			 {
				 primerJinete();
			 }
			 if (comboBox1->SelectedItem->Equals("Caballero"))
			 {
				 primerCaballero();
			 }
			 if (comboBox1->SelectedItem->Equals("Luchador"))
			 {
				 primerLuchador();
			 }
			 if (comboBox1->SelectedItem->Equals("Mercenario"))
			 {
				 primerMercenario();
			 }
			 if (comboBox1->SelectedItem->Equals("Mirmidon"))
			 {
				 primerMirmidor();
			 }

}
private: System::Void Juego_Load(System::Object^  sender, System::EventArgs^  e) {
			 nuevoJinete("Gildarts");
			 nuevoJinete("Agro");
			 nuevoJinete("Wander");
			 nuevoCaballero("Gan fall");
			 nuevoCaballero("Kyros");
			 nuevoLuchador("Neptuno");
			 nuevoMercenario("Leon");
			 nuevoMercenario("Ada");
			 nuevoMercenario("Krauser");
			 nuevoMercenario("Wesker");
			 nuevoMercenario("Crocodile");
			 nuevoMirmidon("Lacayo1");
			 nuevoMirmidon("Lacayo2");
			 nuevoMirmidon("Lacayo3");
			 nuevoMirmidon("Lacayo4");
			 nuevoMirmidon("Lacayo6");
			 nuevoMirmidon("Lacayo7");
			 nuevoMirmidon("Lacayo8");
			 nuevoMirmidon("Lacayo9");
			 nuevoMirmidon("Lacayo10");
			 nuevoMirmidon("Lacayo11");
			 nuevoMirmidon("Lacayo12");
			 /*
			 mostrar1();
			 mostrar2();
			 mostrar3();
			 mostrar4();
			 mostrar5();
			 */
}
};
}
