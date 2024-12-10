#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� password
	/// </summary>
	public ref class password : public System::Windows::Forms::Form
	{
	public:
		password(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_password;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Button^ button_password_enter;
	private: System::Windows::Forms::Button^ button_password_back;
	private: System::Windows::Forms::Button^ button_password_change;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->button_password_enter = (gcnew System::Windows::Forms::Button());
			this->button_password_back = (gcnew System::Windows::Forms::Button());
			this->button_password_change = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_password
			// 
			this->label_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_password->AutoSize = true;
			this->label_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_password->Location = System::Drawing::Point(271, 218);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(932, 201);
			this->label_password->TabIndex = 0;
			this->label_password->Text = L"   ���� � ����� ��������������\r\n\r\n              ������� ������:";
			// 
			// textBox_password
			// 
			this->textBox_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_password->Location = System::Drawing::Point(500, 444);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(462, 67);
			this->textBox_password->TabIndex = 1;
			// 
			// button_password_enter
			// 
			this->button_password_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_password_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_password_enter->Location = System::Drawing::Point(500, 541);
			this->button_password_enter->Name = L"button_password_enter";
			this->button_password_enter->Size = System::Drawing::Size(462, 141);
			this->button_password_enter->TabIndex = 2;
			this->button_password_enter->Text = L"����";
			this->button_password_enter->UseVisualStyleBackColor = true;
			// 
			// button_password_back
			// 
			this->button_password_back->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_password_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_password_back->Location = System::Drawing::Point(976, 31);
			this->button_password_back->Name = L"button_password_back";
			this->button_password_back->Size = System::Drawing::Size(435, 108);
			this->button_password_back->TabIndex = 3;
			this->button_password_back->Text = L"��������� �����";
			this->button_password_back->UseVisualStyleBackColor = true;
			this->button_password_back->Click += gcnew System::EventHandler(this, &password::button_password_back_Click);
			// 
			// button_password_change
			// 
			this->button_password_change->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_password_change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_password_change->Location = System::Drawing::Point(31, 764);
			this->button_password_change->Name = L"button_password_change";
			this->button_password_change->Size = System::Drawing::Size(395, 108);
			this->button_password_change->TabIndex = 4;
			this->button_password_change->Text = L"������� ������";
			this->button_password_change->UseVisualStyleBackColor = true;
			// 
			// password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1448, 902);
			this->Controls->Add(this->button_password_change);
			this->Controls->Add(this->button_password_back);
			this->Controls->Add(this->button_password_enter);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->label_password);
			this->Name = L"password";
			this->Text = L"���� ������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*����������� �����, � ����� login*/
	private: System::Void button_password_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
