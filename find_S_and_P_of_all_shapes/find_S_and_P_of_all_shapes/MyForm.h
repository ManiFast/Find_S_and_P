#pragma once
#include <cmath>

namespace findSandPofallshapes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;







	private: System::Windows::Forms::Button^ P_circle;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ S_circle;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ answer;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ P_square;


	private: System::Windows::Forms::Button^ S_square;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;





	private: System::Windows::Forms::ComboBox^ comboBox_Circle;
	private: System::Windows::Forms::TextBox^ textBox_Circle;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ value_circle;
	private: System::Windows::Forms::ComboBox^ comboBox_Square;

	private: System::Windows::Forms::TextBox^ textBox_Square;
	private: System::Windows::Forms::Label^ value_square;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox_Rectangle;
	private: System::Windows::Forms::TextBox^ textBox_Rectangle;
	private: System::Windows::Forms::Label^ value_rectangle;



	private: System::Windows::Forms::Button^ P_rectangle;
	private: System::Windows::Forms::Button^ S_rectangle;
	private: System::Windows::Forms::TextBox^ textBox2_Rectangle;
	private: System::Windows::Forms::Label^ value2_rectangle;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ textBox2_triangle;

	private: System::Windows::Forms::TextBox^ textBox_triangle;
	private: System::Windows::Forms::ComboBox^ comboBox_triangle;



	private: System::Windows::Forms::Label^ value2_triangle;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ value_triangle;
	private: System::Windows::Forms::Button^ P_triangle;
	private: System::Windows::Forms::Button^ S_triangle;















				 //private: System::Windows::Forms::Button^ S_square;


	protected:





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2_triangle = (gcnew System::Windows::Forms::TextBox());
			this->P_triangle = (gcnew System::Windows::Forms::Button());
			this->textBox_triangle = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_triangle = (gcnew System::Windows::Forms::ComboBox());
			this->S_triangle = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->value2_triangle = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->value_triangle = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2_Rectangle = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Rectangle = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Rectangle = (gcnew System::Windows::Forms::ComboBox());
			this->P_rectangle = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->S_rectangle = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->value2_rectangle = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->value_rectangle = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox_Square = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Square = (gcnew System::Windows::Forms::ComboBox());
			this->P_square = (gcnew System::Windows::Forms::Button());
			this->S_square = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->value_square = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_Circle = (gcnew System::Windows::Forms::TextBox());
			this->P_circle = (gcnew System::Windows::Forms::Button());
			this->comboBox_Circle = (gcnew System::Windows::Forms::ComboBox());
			this->S_circle = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->value_circle = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(876, 376);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(868, 350);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Usual";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->textBox2_triangle);
			this->panel4->Controls->Add(this->P_triangle);
			this->panel4->Controls->Add(this->textBox_triangle);
			this->panel4->Controls->Add(this->comboBox_triangle);
			this->panel4->Controls->Add(this->S_triangle);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->value2_triangle);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->value_triangle);
			this->panel4->Location = System::Drawing::Point(0, 177);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(297, 171);
			this->panel4->TabIndex = 3;
			// 
			// textBox2_triangle
			// 
			this->textBox2_triangle->Location = System::Drawing::Point(220, 97);
			this->textBox2_triangle->Name = L"textBox2_triangle";
			this->textBox2_triangle->Size = System::Drawing::Size(66, 20);
			this->textBox2_triangle->TabIndex = 3;
			// 
			// P_triangle
			// 
			this->P_triangle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->P_triangle->Cursor = System::Windows::Forms::Cursors::No;
			this->P_triangle->Enabled = false;
			this->P_triangle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->P_triangle->Location = System::Drawing::Point(183, 144);
			this->P_triangle->Name = L"P_triangle";
			this->P_triangle->Size = System::Drawing::Size(103, 22);
			this->P_triangle->TabIndex = 7;
			this->P_triangle->Text = L"P";
			this->P_triangle->UseVisualStyleBackColor = false;
			this->P_triangle->Click += gcnew System::EventHandler(this, &MyForm::P_triangle_Click);
			// 
			// textBox_triangle
			// 
			this->textBox_triangle->Location = System::Drawing::Point(220, 75);
			this->textBox_triangle->Name = L"textBox_triangle";
			this->textBox_triangle->Size = System::Drawing::Size(66, 20);
			this->textBox_triangle->TabIndex = 3;
			// 
			// comboBox_triangle
			// 
			this->comboBox_triangle->FormattingEnabled = true;
			this->comboBox_triangle->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"(b, h)" });
			this->comboBox_triangle->Location = System::Drawing::Point(185, 51);
			this->comboBox_triangle->Name = L"comboBox_triangle";
			this->comboBox_triangle->Size = System::Drawing::Size(102, 21);
			this->comboBox_triangle->TabIndex = 2;
			// 
			// S_triangle
			// 
			this->S_triangle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->S_triangle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->S_triangle->Location = System::Drawing::Point(183, 123);
			this->S_triangle->Name = L"S_triangle";
			this->S_triangle->Size = System::Drawing::Size(103, 22);
			this->S_triangle->TabIndex = 8;
			this->S_triangle->Text = L"S";
			this->S_triangle->UseVisualStyleBackColor = false;
			this->S_triangle->Click += gcnew System::EventHandler(this, &MyForm::S_triangle_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-1, -2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(178, 172);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// value2_triangle
			// 
			this->value2_triangle->AutoSize = true;
			this->value2_triangle->Font = (gcnew System::Drawing::Font(L"Roboto Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value2_triangle->Location = System::Drawing::Point(181, 97);
			this->value2_triangle->Name = L"value2_triangle";
			this->value2_triangle->Size = System::Drawing::Size(41, 19);
			this->value2_triangle->TabIndex = 3;
			this->value2_triangle->Text = L"v = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(185, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 17);
			this->label10->TabIndex = 1;
			this->label10->Text = L"S = 2 / (a * h)";
			// 
			// value_triangle
			// 
			this->value_triangle->AutoSize = true;
			this->value_triangle->Font = (gcnew System::Drawing::Font(L"Roboto Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_triangle->Location = System::Drawing::Point(181, 75);
			this->value_triangle->Name = L"value_triangle";
			this->value_triangle->Size = System::Drawing::Size(41, 19);
			this->value_triangle->TabIndex = 3;
			this->value_triangle->Text = L"v = ";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->textBox2_Rectangle);
			this->panel2->Controls->Add(this->textBox_Rectangle);
			this->panel2->Controls->Add(this->comboBox_Rectangle);
			this->panel2->Controls->Add(this->P_rectangle);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->S_rectangle);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->value2_rectangle);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->value_rectangle);
			this->panel2->Location = System::Drawing::Point(579, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(286, 171);
			this->panel2->TabIndex = 2;
			// 
			// textBox2_Rectangle
			// 
			this->textBox2_Rectangle->Location = System::Drawing::Point(194, 87);
			this->textBox2_Rectangle->Name = L"textBox2_Rectangle";
			this->textBox2_Rectangle->Size = System::Drawing::Size(75, 20);
			this->textBox2_Rectangle->TabIndex = 5;
			// 
			// textBox_Rectangle
			// 
			this->textBox_Rectangle->Location = System::Drawing::Point(194, 64);
			this->textBox_Rectangle->Name = L"textBox_Rectangle";
			this->textBox_Rectangle->Size = System::Drawing::Size(75, 20);
			this->textBox_Rectangle->TabIndex = 5;
			// 
			// comboBox_Rectangle
			// 
			this->comboBox_Rectangle->FormattingEnabled = true;
			this->comboBox_Rectangle->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sides (a, b)", L"diagonal (a, d)", L"diagonal (b, d)" });
			this->comboBox_Rectangle->Location = System::Drawing::Point(160, 41);
			this->comboBox_Rectangle->Name = L"comboBox_Rectangle";
			this->comboBox_Rectangle->Size = System::Drawing::Size(109, 21);
			this->comboBox_Rectangle->TabIndex = 4;
			this->comboBox_Rectangle->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_Rectangle_SelectedIndexChanged);
			// 
			// P_rectangle
			// 
			this->P_rectangle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->P_rectangle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->P_rectangle->Location = System::Drawing::Point(160, 144);
			this->P_rectangle->Name = L"P_rectangle";
			this->P_rectangle->Size = System::Drawing::Size(109, 22);
			this->P_rectangle->TabIndex = 7;
			this->P_rectangle->Text = L"P";
			this->P_rectangle->UseVisualStyleBackColor = false;
			this->P_rectangle->Click += gcnew System::EventHandler(this, &MyForm::P_rectangle_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-1, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(157, 171);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// S_rectangle
			// 
			this->S_rectangle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->S_rectangle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->S_rectangle->Location = System::Drawing::Point(160, 123);
			this->S_rectangle->Name = L"S_rectangle";
			this->S_rectangle->Size = System::Drawing::Size(109, 22);
			this->S_rectangle->TabIndex = 8;
			this->S_rectangle->Text = L"S";
			this->S_rectangle->UseVisualStyleBackColor = false;
			this->S_rectangle->Click += gcnew System::EventHandler(this, &MyForm::S_rectangle_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(160, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"S = a * sqrt(d^2 - a^2)";
			// 
			// value2_rectangle
			// 
			this->value2_rectangle->AutoSize = true;
			this->value2_rectangle->Font = (gcnew System::Drawing::Font(L"Roboto Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value2_rectangle->Location = System::Drawing::Point(159, 88);
			this->value2_rectangle->Name = L"value2_rectangle";
			this->value2_rectangle->Size = System::Drawing::Size(41, 19);
			this->value2_rectangle->TabIndex = 3;
			this->value2_rectangle->Text = L"v = ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(160, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"S = a * b";
			// 
			// value_rectangle
			// 
			this->value_rectangle->AutoSize = true;
			this->value_rectangle->Font = (gcnew System::Drawing::Font(L"Roboto Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_rectangle->Location = System::Drawing::Point(159, 65);
			this->value_rectangle->Name = L"value_rectangle";
			this->value_rectangle->Size = System::Drawing::Size(41, 19);
			this->value_rectangle->TabIndex = 3;
			this->value_rectangle->Text = L"v = ";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->textBox_Square);
			this->panel3->Controls->Add(this->comboBox_Square);
			this->panel3->Controls->Add(this->P_square);
			this->panel3->Controls->Add(this->S_square);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->value_square);
			this->panel3->Location = System::Drawing::Point(303, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(270, 171);
			this->panel3->TabIndex = 1;
			// 
			// textBox_Square
			// 
			this->textBox_Square->Location = System::Drawing::Point(197, 89);
			this->textBox_Square->Name = L"textBox_Square";
			this->textBox_Square->Size = System::Drawing::Size(67, 20);
			this->textBox_Square->TabIndex = 2;
			// 
			// comboBox_Square
			// 
			this->comboBox_Square->FormattingEnabled = true;
			this->comboBox_Square->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"side (a)", L"diagonal (d)" });
			this->comboBox_Square->Location = System::Drawing::Point(163, 65);
			this->comboBox_Square->Name = L"comboBox_Square";
			this->comboBox_Square->Size = System::Drawing::Size(101, 21);
			this->comboBox_Square->TabIndex = 9;
			this->comboBox_Square->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_Square_SelectedIndexChanged);
			// 
			// P_square
			// 
			this->P_square->BackColor = System::Drawing::Color::WhiteSmoke;
			this->P_square->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->P_square->Location = System::Drawing::Point(163, 145);
			this->P_square->Name = L"P_square";
			this->P_square->Size = System::Drawing::Size(101, 22);
			this->P_square->TabIndex = 7;
			this->P_square->Text = L"P";
			this->P_square->UseVisualStyleBackColor = false;
			this->P_square->Click += gcnew System::EventHandler(this, &MyForm::P_square_Click);
			// 
			// S_square
			// 
			this->S_square->BackColor = System::Drawing::Color::WhiteSmoke;
			this->S_square->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->S_square->Location = System::Drawing::Point(163, 124);
			this->S_square->Name = L"S_square";
			this->S_square->Size = System::Drawing::Size(101, 22);
			this->S_square->TabIndex = 8;
			this->S_square->Text = L"S";
			this->S_square->UseVisualStyleBackColor = false;
			this->S_square->Click += gcnew System::EventHandler(this, &MyForm::S_square_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-1, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(152, 171);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(160, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 17);
			this->label5->TabIndex = 1;
			this->label5->Text = L"P = 2 * sqrt(2) * d";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(160, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 17);
			this->label8->TabIndex = 1;
			this->label8->Text = L"S = 1|2 * d^2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(210, 2);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 17);
			this->label9->TabIndex = 1;
			this->label9->Text = L"P = 4 * a";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(160, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 1;
			this->label7->Text = L"S = a^2";
			// 
			// value_square
			// 
			this->value_square->AutoSize = true;
			this->value_square->Font = (gcnew System::Drawing::Font(L"Roboto Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_square->Location = System::Drawing::Point(160, 89);
			this->value_square->Name = L"value_square";
			this->value_square->Size = System::Drawing::Size(41, 19);
			this->value_square->TabIndex = 3;
			this->value_square->Text = L"v = ";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox_Circle);
			this->panel1->Controls->Add(this->P_circle);
			this->panel1->Controls->Add(this->comboBox_Circle);
			this->panel1->Controls->Add(this->S_circle);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->value_circle);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(297, 171);
			this->panel1->TabIndex = 0;
			// 
			// textBox_Circle
			// 
			this->textBox_Circle->Location = System::Drawing::Point(221, 82);
			this->textBox_Circle->Name = L"textBox_Circle";
			this->textBox_Circle->Size = System::Drawing::Size(65, 20);
			this->textBox_Circle->TabIndex = 9;
			// 
			// P_circle
			// 
			this->P_circle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->P_circle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->P_circle->Location = System::Drawing::Point(183, 145);
			this->P_circle->Name = L"P_circle";
			this->P_circle->Size = System::Drawing::Size(103, 22);
			this->P_circle->TabIndex = 7;
			this->P_circle->Text = L"P";
			this->P_circle->UseVisualStyleBackColor = false;
			this->P_circle->Click += gcnew System::EventHandler(this, &MyForm::P_circle_Click);
			// 
			// comboBox_Circle
			// 
			this->comboBox_Circle->FormattingEnabled = true;
			this->comboBox_Circle->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Radius (r)", L"Diamentr (d)", L"Circumference (l)" });
			this->comboBox_Circle->Location = System::Drawing::Point(185, 57);
			this->comboBox_Circle->Name = L"comboBox_Circle";
			this->comboBox_Circle->Size = System::Drawing::Size(102, 21);
			this->comboBox_Circle->TabIndex = 2;
			this->comboBox_Circle->Text = L"Chose value";
			this->comboBox_Circle->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_Circle_SelectedIndexChanged);
			// 
			// S_circle
			// 
			this->S_circle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->S_circle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->S_circle->Location = System::Drawing::Point(183, 124);
			this->S_circle->Name = L"S_circle";
			this->S_circle->Size = System::Drawing::Size(103, 22);
			this->S_circle->TabIndex = 8;
			this->S_circle->Text = L"S";
			this->S_circle->UseVisualStyleBackColor = false;
			this->S_circle->Click += gcnew System::EventHandler(this, &MyForm::S_circle_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(185, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"S = Pi * r2";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(185, 37);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 17);
			this->label14->TabIndex = 1;
			this->label14->Text = L"P = 2 * Pi * r";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto Slab", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(185, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"(S = l^2) / (4 * Pi)";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(177, 171);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// value_circle
			// 
			this->value_circle->AutoSize = true;
			this->value_circle->Font = (gcnew System::Drawing::Font(L"Roboto Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_circle->Location = System::Drawing::Point(184, 83);
			this->value_circle->Name = L"value_circle";
			this->value_circle->Size = System::Drawing::Size(41, 19);
			this->value_circle->TabIndex = 3;
			this->value_circle->Text = L"v = ";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(868, 466);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"3D";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 394);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Answer:";
			// 
			// answer
			// 
			this->answer->Location = System::Drawing::Point(79, 394);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(141, 20);
			this->answer->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(834, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Debug";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Debug_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(806, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(218, 394);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(37, 20);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Copy";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 419);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->answer);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Find S and P of all shapes";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

		double numberPi = 3.1415926535;

		//	sqrt(a) - корень a
		//	pow(a, b) - возведение а в степень b

		

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}

			 //=================================================================================


			//! Circle
private: System::Void comboBox_Circle_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Circle->SelectedIndex == 0)	// Radius
	{
		value_circle->Text = "R =";
	}
	else if (comboBox_Circle->SelectedIndex == 1)		// Diamentr
	{
		value_circle->Text = "d =";
	}
	else if (comboBox_Circle->SelectedIndex == 2)		// Circumference
	{
		value_circle->Text = "l =";
	}
}
private: System::Void S_circle_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Circle->SelectedIndex == 0)		// R
	{
		answer->Text = Convert::ToString(numberPi * pow(Convert::ToDouble(textBox_Circle->Text), 2));
	}
	else if (comboBox_Circle->SelectedIndex == 1)		// d
	{
		answer->Text = Convert::ToString(numberPi * pow(Convert::ToDouble(textBox_Circle->Text) / 2, 2));
	}
	else if (comboBox_Circle->SelectedIndex == 2)		// l
	{
		answer->Text = Convert::ToString((Convert::ToDouble(pow(Convert::ToDouble(textBox_Circle->Text), 2)) / (4 * numberPi)));
	}
}
private: System::Void P_circle_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Circle->SelectedIndex == 0)		// R
	{
		answer->Text = Convert::ToString(2 * numberPi * Convert::ToDouble(textBox_Circle->Text));
	}
	else if (comboBox_Circle->SelectedIndex == 1)		// d
	{
		answer->Text = Convert::ToString(2 * numberPi * (Convert::ToDouble(textBox_Circle->Text)/2));
	}
	else if (comboBox_Circle->SelectedIndex == 2)		// C
	{
		MessageBox::Show("You can't find the perimeter of a circle using the circumference of a circle.", "Careful", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
}

			 //! Square
private: System::Void comboBox_Square_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Square->SelectedIndex == 0)	// a
	{
		value_square->Text = "a =";
	}
	else if (comboBox_Square->SelectedIndex == 1)	// d
	{
		value_square->Text = "d =";
	}
}
private: System::Void S_square_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Square->SelectedIndex == 0)		// a
	{
		answer->Text = Convert::ToString(pow(Convert::ToDouble(textBox_Square->Text), 2));
	}
	else if (comboBox_Square->SelectedIndex == 1)		// d
	{
		answer->Text = Convert::ToString(0.5 * pow(Convert::ToDouble(textBox_Square->Text), 2));
	}
}
private: System::Void P_square_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Square->SelectedIndex == 0)		// a
	{
		answer->Text = Convert::ToString(Convert::ToDouble(textBox_Square->Text) * 4);
	}
	else if (comboBox_Square->SelectedIndex == 1)		// d
	{
		answer->Text = Convert::ToString((2 * sqrt(2)) * Convert::ToDouble(textBox_Square->Text));
	}
}
			 //! Rectangle
private: System::Void comboBox_Rectangle_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Rectangle->SelectedIndex == 0)
	{
		value_rectangle->Text = "a =";
		value2_rectangle->Text = "b =";
	}
	else if (comboBox_Rectangle->SelectedIndex == 1)
	{
		value_rectangle->Text = "a =";
		value2_rectangle->Text = "d =";
	}
	else if (comboBox_Rectangle->SelectedIndex == 2)
	{
		value_rectangle->Text = "b =";
		value2_rectangle->Text = "d =";
	}
}
private: System::Void S_rectangle_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Rectangle->SelectedIndex == 0)
	{
		// If sedes same msg
		if (textBox_Rectangle->Text == textBox2_Rectangle->Text)
		{
			MessageBox::Show("Rectangle doesnt have same sides !", "Careful", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		answer->Text = Convert::ToString(Convert::ToDouble(textBox_Rectangle->Text) * Convert::ToDouble(textBox2_Rectangle->Text));
	}
	else if (comboBox_Rectangle->SelectedIndex == 1)
	{
		// If sedes same msg
		if (textBox_Rectangle->Text == textBox2_Rectangle->Text)
		{
			MessageBox::Show("Rectangle doesnt have same sides !", "Careful", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		// Pifagor		d * sqrt(d^2 - a^2)
		answer->Text = Convert::ToString(Convert::ToDouble(textBox_Rectangle->Text) * (sqrt(pow(Convert::ToDouble(textBox2_Rectangle->Text), 2) - pow(Convert::ToDouble(textBox_Rectangle->Text), 2))));
	}
	else if (comboBox_Rectangle->SelectedIndex == 2)
	{
		// If sedes same msg
		if (textBox_Rectangle->Text == textBox2_Rectangle->Text)
		{
			MessageBox::Show("Rectangle doesnt have same sides !", "Careful", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		// Pifagor		d * sqrt(d^2 - b^2)
		answer->Text = Convert::ToString(Convert::ToDouble(textBox_Rectangle->Text) * (sqrt(pow(Convert::ToDouble(textBox2_Rectangle->Text), 2) - pow(Convert::ToDouble(textBox_Rectangle->Text), 2))));
	}
}
private: System::Void P_rectangle_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_Rectangle->SelectedIndex == 0)
	{
		// If sedes same msg
		if (textBox_Rectangle->Text == textBox2_Rectangle->Text)
		{
			MessageBox::Show("Rectangle doesnt have same sides !", "Careful", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		answer->Text = Convert::ToString(Convert::ToDouble(textBox_Rectangle->Text) + Convert::ToDouble(textBox2_Rectangle->Text));
	}
	else if (comboBox_Rectangle->SelectedIndex == 1)
	{
		// If sedes same msg
		if (textBox_Rectangle->Text == textBox2_Rectangle->Text)
		{
			MessageBox::Show("Rectangle doesnt have same sides !", "Careful", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		// Pifagor		d + sqrt(d^2 - a^2)
		answer->Text = Convert::ToString(Convert::ToDouble(textBox_Rectangle->Text) + (sqrt(pow(Convert::ToDouble(textBox2_Rectangle->Text), 2) - pow(Convert::ToDouble(textBox_Rectangle->Text), 2))));
	}
	else if (comboBox_Rectangle->SelectedIndex == 2)
	{
		// If sedes same msg
		if (textBox_Rectangle->Text == textBox2_Rectangle->Text)
		{
			MessageBox::Show("Rectangle doesnt have same sides !", "Careful", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		// Pifagor		d + sqrt(d^2 - b^2)
		answer->Text = Convert::ToString(Convert::ToDouble(textBox_Rectangle->Text) + (sqrt(pow(Convert::ToDouble(textBox2_Rectangle->Text), 2) - pow(Convert::ToDouble(textBox_Rectangle->Text), 2))));
	}
}

			 //! Triangle
private: System::Void S_triangle_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_triangle->SelectedIndex == 0)
	{
		answer->Text = Convert::ToString(2 / (Convert::ToDouble(textBox_triangle->Text) * Convert::ToDouble(textBox2_triangle->Text)));
	}
}
private: System::Void P_triangle_Click(System::Object^ sender, System::EventArgs^ e) {
}

				//#================================
private: System::Void Debug_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(textBox_Circle->Text, "Diamentr", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	MessageBox::Show(textBox_Circle->Text, "Radius", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
