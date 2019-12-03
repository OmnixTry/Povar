#pragma once
#include "ChooseDish.h"
#include "recipe_editor.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentPage
	/// </summary>
	public ref class StudentPage : public System::Windows::Forms::Form
	{
	public:
		String^ login;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox2;
	public:
		float lvl;
		StudentPage(String^ login, float lvl)
		{
			InitializeComponent();
			this->login = login;
			this->lvl = lvl;
		}
		String^ get_login() {
			return this->login;
		}
		float get_lvl() {
			return this->lvl;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentPage()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentPage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(928, -4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"My Level: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Chocolate;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(299, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(427, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"What you want to cook";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(46, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 125);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentPage::Button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(100, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Soups";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(319, 282);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 29);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Garnishes";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(282, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 125);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentPage::Button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(590, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Meats";
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(525, 154);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(201, 125);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StudentPage::Button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(825, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 29);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Dessert";
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(760, 154);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(201, 125);
			this->button4->TabIndex = 8;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StudentPage::Button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 386);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(329, 34);
			this->textBox1->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(12, 439);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(265, 69);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Search recipe by name";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &StudentPage::Button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(381, 412);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(208, 51);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Not found";
			this->label7->Visible = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(12, 524);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(265, 76);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Show my favorite recipe";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &StudentPage::Button6_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(806, 354);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(362, 246);
			this->textBox2->TabIndex = 14;
			this->textBox2->Visible = false;
			// 
			// StudentPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1180, 612);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StudentPage";
			this->Text = L"StudentPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ category = "soups";
		ChooseDish^ dish_form = gcnew ChooseDish(get_lvl(), category, get_login());
		dish_form->Show();

	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ category = "garnishes";
		ChooseDish^ dish_form = gcnew ChooseDish(get_lvl(), category, get_login());
		dish_form->Show();
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ category = "meats";
		ChooseDish^ dish_form = gcnew ChooseDish(get_lvl(), category, get_login());
		dish_form->Show();
	}
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ category = "dessert";
		ChooseDish^ dish_form = gcnew ChooseDish(get_lvl(), category, get_login());
		dish_form->Show();
	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		label7->Visible = false;
		std::string nameOfRecipe = msclr::interop::marshal_as<std::string>(textBox1->Text);
		recipeEditor* edit = new recipeEditor();
		std::vector<recipe> recipes = edit->searchByName(nameOfRecipe);
		if (recipes.size() < 1) {
			label7->Visible = true;
		}
		else {
			Cooking^ form_cooking = gcnew Cooking(textBox1->Text, get_login());
			form_cooking->Show();
			this->Close();
		}
	}
	private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string data = "..\\data\\";
		std::string nameOfText = "_favorites.txt";
		std::string login = msclr::interop::marshal_as<std::string>(get_login());
		std::ifstream fav_list(data + login + nameOfText);
		std::string recipe_name;
		std::vector<std::string> favorites;
		if (!fav_list.is_open()) return;
		recipeEditor the_editor;

		while (!fav_list.eof())
		{
			std::getline(fav_list, recipe_name);
			if (recipe_name.size() != 0)
				favorites.push_back(the_editor.searchByName(recipe_name)[0].getName());
		}
		for (int i = 0; i < favorites.size(); i++) {
			String^ sys_str = gcnew String(favorites[i].c_str());
			textBox2->Text += System::Environment::NewLine + sys_str;
		}
		textBox2->Visible = true;
	}
};
}
