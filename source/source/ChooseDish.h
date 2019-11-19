#pragma once
#include "recipe_editor.h"
#include "recipe.h"
#include "recipe_editor.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "Cooking.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChooseDish
	/// </summary>
	public ref class ChooseDish : public System::Windows::Forms::Form
	{
	public:
		int level;
		String^ category;
		recipe *recipeForButton2;
		recipe *recipeForButton3;
		recipe *recipeForButton4;
		recipe *recipeForButton5;
		recipe *recipeForButton6;
		ChooseDish(int lvl, String^ category)
		{
			this->level = lvl;
			this->category = category;
			InitializeComponent();
			
		}
		void setRecipeForButton2(recipe* rec) {
			this->recipeForButton2 = rec;
		}
		void setRecipeForButton3(recipe* rec) {
			this->recipeForButton3 = rec;
		}
		void setRecipeForButton4(recipe* rec) {
			this->recipeForButton4 = rec;
		}
		void setRecipeForButton5(recipe* rec) {
			this->recipeForButton5 = rec;
		}
		void setRecipeForButton6(recipe* rec) {
			this->recipeForButton6 = rec;
		}
		recipe* getRecipeForButton2() {
			return this->recipeForButton2;
		}
		recipe* getRecipeForButton3() {
			return this->recipeForButton3;
		}
		recipe* getRecipeForButton4() {
			return this->recipeForButton4;
		}
		recipe* getRecipeForButton5() {
			return this->recipeForButton5;
		}
		recipe* getRecipeForButton6() {
			return this->recipeForButton6;
		}
		int getLevel() {
			return this->level;
		}
		String^ getCategory() {
			return this->category;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChooseDish()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChooseDish::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(304, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(314, 170);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChooseDish::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(307, 302);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Generate dish for your level";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(129, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 59);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &ChooseDish::Button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(373, 172);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 59);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &ChooseDish::Button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(609, 172);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 59);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &ChooseDish::Button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(243, 251);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 59);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &ChooseDish::Button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(489, 251);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 59);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &ChooseDish::Button6_Click);
			// 
			// ChooseDish
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(839, 497);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"ChooseDish";
			this->Text = L"ChooseDish";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int level = getLevel();
		recipeEditor* editor = new recipeEditor();
		std::string category = msclr::interop::marshal_as<std::string>(getCategory());
		std::vector<recipe> recipes = editor->searchByCategory(category);
		std::vector<recipe> result;
		for (int i = 0; i < recipes.size(); i++) {
			if (recipes[i].getLevel() == level) {
				result.push_back(recipes[i]);
			}
		}
		if (level == 0) {
			String^ name = gcnew String(result[0].getName().c_str());
			button3->Text = name;
			button3->Visible = true;
			setRecipeForButton3(&result[0]);
		}
		else if (level == 1) {
			String^ name = gcnew String(result[0].getName().c_str());
			button2->Text = name;
			button2->Visible = true;
			setRecipeForButton2(&result[0]);
			name = gcnew String(result[1].getName().c_str());
			button4->Text = name;
			button4->Visible = true;
			setRecipeForButton4(&result[1]);
		}
		else if (level == 2) {
			String^ name = gcnew String(result[0].getName().c_str());
			button2->Text = name;
			button2->Visible = true;
			setRecipeForButton2(&result[0]);
			name = gcnew String(result[1].getName().c_str());
			button4->Text = name;
			button4->Visible = true;
			setRecipeForButton4(&result[1]);
			name = gcnew String(result[2].getName().c_str());
			button3->Text = name;
			button3->Visible = true;
			setRecipeForButton3(&result[2]);
		}
		else if (level == 3) {
			String^ name = gcnew String(result[0].getName().c_str());
			button2->Text = name;
			button2->Visible = true;
			setRecipeForButton2(&result[0]);
			name = gcnew String(result[1].getName().c_str());
			button4->Text = name;
			button4->Visible = true;
			setRecipeForButton4(&result[1]);
			name = gcnew String(result[2].getName().c_str());
			button3->Text = name;
			button3->Visible = true;
			setRecipeForButton3(&result[2]);
			name = gcnew String(result[3].getName().c_str());
			button5->Text = name;
			button5->Visible = true;
			setRecipeForButton5(&result[3]);
		}
		else if (level == 4) {
			String^ name = gcnew String(result[0].getName().c_str());
			button2->Text = name;
			button2->Visible = true;
			setRecipeForButton2(&result[0]);
			name = gcnew String(result[1].getName().c_str());
			button4->Text = name;
			button4->Visible = true;
			setRecipeForButton4(&result[1]);
			name = gcnew String(result[2].getName().c_str());
			button3->Text = name;
			button3->Visible = true;
			setRecipeForButton3(&result[2]);
			name = gcnew String(result[3].getName().c_str());
			button5->Text = name;
			button5->Visible = true;
			setRecipeForButton5(&result[3]);
			name = gcnew String(result[4].getName().c_str());
			button6->Text = name;
			button6->Visible = true;
			setRecipeForButton6(&result[4]);
		}
		button1->Visible = false;
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Cooking^ form_cooking = gcnew Cooking(getRecipeForButton2());
	form_cooking->Show();
	this->Close();
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Cooking^ form_cooking = gcnew Cooking(getRecipeForButton3());
	form_cooking->Show();
	this->Close();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Cooking^ form_cooking = gcnew Cooking(getRecipeForButton4());
	form_cooking->Show();
	this->Close();
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Cooking^ form_cooking = gcnew Cooking(getRecipeForButton5());
	form_cooking->Show();
	this->Close();
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Cooking^ form_cooking = gcnew Cooking(getRecipeForButton6());
	form_cooking->Show();
	this->Close();
}
};
}
