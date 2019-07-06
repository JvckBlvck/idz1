#pragma once
#include <windows.h>
#include <cmath>

double InitT = 0, LastT = 6.3; // оборот в 360 градусов (6,28 радиан)
double Step = 0.1, angle = InitT;

int cX = 120, cY = 120; // центр большой окружности
int i = 0; // количество точек прорисовки
double a, b;
double line;
int style;

namespace idz1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label28;


	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::PictureBox^ pictureBox2;







	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"a = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"b = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(45, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 25);
			this->button1->TabIndex = 4;
			this->button1->Text = L"рисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(468, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(638, 467);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PictureBox1_Paint);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(91, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(45, 22);
			this->textBox2->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(132, 516);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 25);
			this->button2->TabIndex = 7;
			this->button2->Text = L"обновить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"цвет";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(347, 524);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"толщина";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(45, 22);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(91, 86);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(45, 22);
			this->textBox4->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(203, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"цвета:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(203, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"0 - черный";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(203, 110);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"1 - красный";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(203, 212);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"4 - зеленый";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(203, 179);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 17);
			this->label10->TabIndex = 17;
			this->label10->Text = L"3 - желтый";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(203, 145);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 17);
			this->label11->TabIndex = 16;
			this->label11->Text = L"2 - синий";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(203, 412);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 17);
			this->label12->TabIndex = 24;
			this->label12->Text = L"10 - сиреневый";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(203, 379);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 17);
			this->label13->TabIndex = 23;
			this->label13->Text = L"9 - оранжевый";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(203, 345);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 17);
			this->label14->TabIndex = 22;
			this->label14->Text = L"8 - синий";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(203, 310);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(156, 17);
			this->label15->TabIndex = 21;
			this->label15->Text = L"7 - сине - фиолетовый";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(203, 277);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(112, 17);
			this->label16->TabIndex = 20;
			this->label16->Text = L"6 - фиолетовый";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(203, 243);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(71, 17);
			this->label17->TabIndex = 19;
			this->label17->Text = L"5 - белый";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(203, 475);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 17);
			this->label18->TabIndex = 26;
			this->label18->Text = L"12 - голубой";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(203, 442);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(117, 17);
			this->label19->TabIndex = 25;
			this->label19->Text = L"11 - коралловый";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(111, 160);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(45, 22);
			this->textBox5->TabIndex = 28;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(39, 160);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(45, 17);
			this->label20->TabIndex = 27;
			this->label20->Text = L"стиль";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(309, 145);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(142, 17);
			this->label21->TabIndex = 33;
			this->label21->Text = L"3 - крупный пунктир";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(309, 111);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(141, 17);
			this->label22->TabIndex = 32;
			this->label22->Text = L"2 - средний пунктир";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(309, 76);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(134, 17);
			this->label23->TabIndex = 31;
			this->label23->Text = L"1 - мелкий пунктир";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(309, 43);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(95, 17);
			this->label24->TabIndex = 30;
			this->label24->Text = L"0 - сплошная";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(309, 9);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(50, 17);
			this->label25->TabIndex = 29;
			this->label25->Text = L"стили:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(104, 226);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(45, 22);
			this->textBox6->TabIndex = 37;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(43, 254);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(116, 17);
			this->label26->TabIndex = 36;
			this->label26->Text = L"макс. пульсации";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(108, 274);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(45, 22);
			this->textBox7->TabIndex = 35;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(39, 206);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(110, 17);
			this->label27->TabIndex = 34;
			this->label27->Text = L"мин. пульсации";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(108, 327);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(45, 22);
			this->textBox8->TabIndex = 39;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(40, 308);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(105, 17);
			this->label28->TabIndex = 38;
			this->label28->Text = L"шаг пульсации";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(106, 388);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(45, 22);
			this->textBox10->TabIndex = 43;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(38, 369);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(139, 17);
			this->label30->TabIndex = 42;
			this->label30->Text = L"задержка движения";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(110, 437);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(45, 22);
			this->textBox11->TabIndex = 45;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(42, 418);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(163, 17);
			this->label31->TabIndex = 44;
			this->label31->Text = L"направление движения";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(309, 246);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(92, 17);
			this->label32->TabIndex = 48;
			this->label32->Text = L"1 - обратное";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(309, 213);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(78, 17);
			this->label33->TabIndex = 47;
			this->label33->Text = L"0 - прямое";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(309, 179);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(99, 17);
			this->label34->TabIndex = 46;
			this->label34->Text = L"направления:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1140, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(297, 203);
			this->pictureBox2->TabIndex = 49;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1458, 571);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Color full_color;
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Image=Image::FromFile("C:\\Users\\senny\\source\\repos\\idz1\\idz1\\эпициклоида.jpg");
}
		 double x, y, x1, y1;
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i == 0)
	{
		label4->Text = " ";
		a = Convert::ToInt32(textBox1->Text);
		b = Convert::ToInt32(textBox2->Text);
		if ((b > 0) && (a > 0))
		{
			label4->Text = " ";
			if (a + b <= 100)
			{
				label4->Text = " ";
				double k = a / b;
				if ((k <= 10) && (k >= 0.1))
				{
					label4->Text = " ";
					if (((Convert::ToInt32(textBox4->Text)) >= 0) && (((Convert::ToInt32(textBox4->Text)) <= 12)))
					{
						label4->Text = " ";
						switch (Convert::ToInt32(textBox4->Text))
						{
						case 0: full_color = Color::Black; break;
						case 1: full_color = Color::Red; break;
						case 2: full_color = Color::Blue; break;
						case 3: full_color = Color::Yellow; break;
						case 4: full_color = Color::Green; break;
						case 5: full_color = Color::White; break;
						case 6: full_color = Color::Violet; break;
						case 7: full_color = Color::BlueViolet; break;
						case 8: full_color = Color::Cyan; break;
						case 9: full_color = Color::Orange; break;
						case 10: full_color = Color::Magenta; break;
						case 11: full_color = Color::Salmon; break;
						case 12: full_color = Color::Aquamarine; break;
						}
						line = Convert::ToInt32(textBox3->Text);
						if ((line >= 1) && (line <= 10))
						{
							label4->Text = " ";
							if (((Convert::ToInt32(textBox5->Text)) >= 0) && (((Convert::ToInt32(textBox5->Text)) <= 3)))
							{
								label4->Text = " ";
								switch (Convert::ToInt32(textBox5->Text))
								{
								case 0: style = 0; break;
								case 1: style = 1; break;
								case 2: style = 2; break;
								case 3: style = 3; break;
								}
								if (((Convert::ToInt32(textBox6->Text)) >= 5) && (((Convert::ToInt32(textBox7->Text)) <= 100)) && ((Convert::ToInt32(textBox6->Text)) <= (Convert::ToInt32(textBox7->Text))))
								{
									label4->Text = " ";
									if (((Convert::ToInt32(textBox6->Text)) <= b) && (((Convert::ToInt32(textBox7->Text)) >= b)))
									{
										label4->Text = " ";
										if (((Convert::ToDouble(textBox8->Text)) >= 1) && (((Convert::ToDouble(textBox8->Text)) <= 5)))
										{
											label4->Text = " ";
											if (((Convert::ToDouble(textBox10->Text)) >= 1) && (((Convert::ToDouble(textBox10->Text)) <= 75)))
											{
												label4->Text = " ";
												if (((Convert::ToDouble(textBox11->Text)) >= 0) && (((Convert::ToDouble(textBox11->Text)) <= 1)))
												{
													int wait = Convert::ToDouble(textBox10->Text);
													int min = Convert::ToInt32(textBox6->Text);
													int max = Convert::ToInt32(textBox7->Text);
													double r = b;
													int puls = 1;
													double q_start = 0;
													double q_step = 0.3;
													double q_finish = 6.3;
													double q = q_start;
													int puls_step = Convert::ToInt32(textBox8->Text);
													array<Point>^ p = gcnew array <Point>(64);
													while (angle < LastT)
													{
														x = b * (k + 1) * (cos(angle) - (cos((k + 1) * angle) / (k + 1))) + 180;
														if (Convert::ToDouble(textBox10->Text) == 0)
															y = b * (k + 1) * (sin(angle) - (sin((k + 1) * angle) / (k + 1))) + 180;
														else
															y = -b * (k + 1) * (sin(angle) - (sin((k + 1) * angle) / (k + 1))) + 180;
														p[i] = Drawing::Point(int(x), int(y)); // расчет очередной точки траектории
														Paint_Graphic(180, 180, a, x, y, p);
														q += q_step;
														if (q == q_finish)
															q = q_start;
														if (puls > 0)
															if (r < max)
																if (r + puls_step <= max)
																	r += puls_step;
																else
																	r = max;
															else
															{
																puls = -1;
																if (r - puls_step >= min)
																	r -= puls_step;
																else
																	r = min;
															}
														else
															if (r > min)
																if (r - puls_step >= min)
																	r -= puls_step;
																else
																	r = min;
															else
															{
																puls = 1;
																if (r + puls_step <= max)
																	r += puls_step;
																else
																	r = max;
															}
														Paint_Circle(int(x), int(y), r, q);
														angle += Step;
														::Sleep(wait); //время приостановки прорисовки
														i++;
													}
												}
												else
													label4->Text = "Ошибка, некорректное направление";
											}
											else
												label4->Text = "Ошибка, слишком большая или слишком маленькая задержка";
										}
										else
											label4->Text = "Ошибка, слишком маленький или слишком большой шаг пульсации";
									}
									else
										label4->Text = "Ошибка, исходный радиус больше минимума или меньше максимума пульсации";
								}
								else
									label4->Text = "Ошибка, слишком маленький минимум или слишком большой максимум пульсации или минимум больше максимума";
							}
							else
								label4->Text = "Ошибка, некорректный индекс стиля линии";
						}
						else
							label4->Text = "Ошибка, линия слишком толстая, либо слишком тонкая";
					}
					else
						label4->Text = "Ошибка, некорректный индекс цвета";
				}
				else
					label4->Text = "Ошибка, разница между радиусами слишком велика";
			}
			else
				label4->Text = "Ошибка, радиусы слишком велики";
		}
		else
			label4->Text = "Ошибка, радиусы должны быть положительными";
	}
	else
		label4->Text = "Ошибка, обновите картинку";
}
private: void Paint_Circle(int x, int y, int r, double q)
{
	Pen^ SecondPen = gcnew Pen(full_color);
	Graphics^ Графика = pictureBox1->CreateGraphics();
	x1 = x - r * cos(q) - r * sin(q);
	y1 = y - r * cos(q) - r * sin(q);
	Графика->DrawEllipse(SecondPen, x - r, y - r, r * 2, r * 2);
	//Графика->DrawEllipse(SecondPen, x1, y1, r * 2, r * 2);
	//Point pt1 = Drawing::Point(int(x1), int(y1));
	//Point pt4 = Drawing::Point(int(0), int(0));
	//Point pt2 = Drawing::Point(int(x1+r), int(y1));
	//Point pt3 = Drawing::Point(int(x1), int(y1+r));
	//Графика->DrawLine(SecondPen, pt1, pt2);
	//Графика->DrawLine(SecondPen, pt1, pt3);
	//Графика->DrawLine(SecondPen, pt1, pt4);
}
	private: void Paint_Graphic(int cX, int cY, int r2, int x, int y, array<Point>^ p)
	{
		Pen^ MainPen = gcnew Pen(Color::Red, line);
		if (style == 0) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid; }
		if (style == 1) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot; }
		if (style == 2) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot; }
		if (style == 3) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash; }
		Graphics^ Графика = pictureBox1->CreateGraphics();
		Графика->Clear(BackColor);
		Графика->DrawLines(MainPen, p); // траектория
	}


			 // точки для прорисовки (LastT/Step)
private: System::Void PictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = " ";
	i = 0;
	angle = InitT;
	pictureBox1->Refresh();
}
};
}
