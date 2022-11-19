#pragma once
#include <string>

namespace Project1 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		double fnum;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button_x;
	private: System::Windows::Forms::Button^ button_dev;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_clear;
	public:
		char op; //operation
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button_equal;
	private: System::Windows::Forms::Button^ button0;	
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ buttondot;

	private: System::Windows::Forms::Button^ button_mul;


	private: System::Windows::Forms::Button^ button14;

	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->buttondot = (gcnew System::Windows::Forms::Button());
			this->button_x = (gcnew System::Windows::Forms::Button());
			this->button_dev = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(115, 43);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 45);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(64, 94);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 45);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(115, 94);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 45);
			this->button6->TabIndex = 4;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(13, 145);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 45);
			this->button7->TabIndex = 12;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(64, 145);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 45);
			this->button8->TabIndex = 11;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(115, 145);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(45, 45);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(64, 196);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(45, 45);
			this->button0->TabIndex = 9;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button_equal
			// 
			this->button_equal->Location = System::Drawing::Point(13, 196);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(45, 45);
			this->button_equal->TabIndex = 8;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = true;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::button_equal_Click);
			// 
			// buttondot
			// 
			this->buttondot->Location = System::Drawing::Point(115, 196);
			this->buttondot->Name = L"buttondot";
			this->buttondot->Size = System::Drawing::Size(45, 45);
			this->buttondot->TabIndex = 7;
			this->buttondot->Text = L".";
			this->buttondot->UseVisualStyleBackColor = true;
			this->buttondot->Click += gcnew System::EventHandler(this, &MyForm::buttondot_Click);
			// 
			// button_x
			// 
			this->button_x->Location = System::Drawing::Point(166, 145);
			this->button_x->Name = L"button_x";
			this->button_x->Size = System::Drawing::Size(45, 45);
			this->button_x->TabIndex = 16;
			this->button_x->Text = L"x";
			this->button_x->UseVisualStyleBackColor = true;
			this->button_x->Click += gcnew System::EventHandler(this, &MyForm::button_x_Click);
			// 
			// button_dev
			// 
			this->button_dev->Location = System::Drawing::Point(166, 196);
			this->button_dev->Name = L"button_dev";
			this->button_dev->Size = System::Drawing::Size(45, 45);
			this->button_dev->TabIndex = 15;
			this->button_dev->Text = L"/";
			this->button_dev->UseVisualStyleBackColor = true;
			this->button_dev->Click += gcnew System::EventHandler(this, &MyForm::button_dev_Click);
			// 
			// button_minus
			// 
			this->button_minus->Location = System::Drawing::Point(166, 94);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(45, 45);
			this->button_minus->TabIndex = 14;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_plus
			// 
			this->button_plus->Location = System::Drawing::Point(166, 43);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(45, 45);
			this->button_plus->TabIndex = 13;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_clear
			// 
			this->button_clear->Location = System::Drawing::Point(14, 247);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(197, 58);
			this->button_clear->TabIndex = 17;
			this->button_clear->Text = L"Clear";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(219, 313);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_x);
			this->Controls->Add(this->button_dev);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->buttondot);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Location = System::Drawing::Point(165, 90);
			this->MaximumSize = System::Drawing::Size(235, 352);
			this->MinimumSize = System::Drawing::Size(235, 352);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "1";

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "9";
}

private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + "0";
}

private: System::Void buttondot_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text + ".";
}

private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	double snum, result; //second number and result;
	snum = Double::Parse(textBox1->Text);
	if (op == '+') {
		result = fnum + snum;
		this->textBox1->Text = textBox1->Text->Empty;
		this->textBox1->Text = textBox1->Text + result;
	}
	else if (op == '-') {
		result = fnum - snum;
		this->textBox1->Text = textBox1->Text->Empty;
		this->textBox1->Text = textBox1->Text + result;
	}
	else if (op == 'x') {
		result = fnum * snum;
		this->textBox1->Text = textBox1->Text->Empty;
		this->textBox1->Text = textBox1->Text + result;
	}
	else if (op == '/') {
		result = fnum / snum;
		this->textBox1->Text = textBox1->Text->Empty;
		this->textBox1->Text = textBox1->Text + result;

	}
}

	   //OPERATIONS 
private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	fnum = Double::Parse(textBox1->Text);
	this->textBox1->Text = textBox1->Text->Empty;
	op = '+';
}
private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	fnum = Double::Parse(textBox1->Text);
	this->textBox1->Text = textBox1->Text->Empty;
	op = '-';
}
private: System::Void button_x_Click(System::Object^ sender, System::EventArgs^ e) {
	fnum = Double::Parse(textBox1->Text);
	this->textBox1->Text = textBox1->Text->Empty;
	op = 'x';
}
private: System::Void button_dev_Click(System::Object^ sender, System::EventArgs^ e) {
	fnum = Double::Parse(textBox1->Text);
	this->textBox1->Text = textBox1->Text->Empty;
	op = '/';
}
private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = textBox1->Text->Empty;
}
};
}
