#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� database
	/// </summary>
	public ref class database : public System::Windows::Forms::Form
	{
	public:
		database(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_safe;
	public:

	/*���������� ���������� ��� �������� ��������� ������*/
	public: bool save = true;
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~database()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_createOrder;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_dataOutput;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_choiceServices;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_search;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_adddata;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_info;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_exit;


	protected:








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
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->ToolStripMenuItem_createOrder = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_dataOutput = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_choiceServices = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_search = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_adddata = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_safe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->ToolStripMenuItem_createOrder,
					this->ToolStripMenuItem_dataOutput, this->ToolStripMenuItem_choiceServices, this->ToolStripMenuItem_search, this->ToolStripMenuItem_adddata,
					this->ToolStripMenuItem_safe, this->ToolStripMenuItem_info, this->ToolStripMenuItem_exit
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(2032, 53);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip";
			// 
			// ToolStripMenuItem_createOrder
			// 
			this->ToolStripMenuItem_createOrder->Name = L"ToolStripMenuItem_createOrder";
			this->ToolStripMenuItem_createOrder->Size = System::Drawing::Size(282, 49);
			this->ToolStripMenuItem_createOrder->Text = L"�������� ������";
			// 
			// ToolStripMenuItem_dataOutput
			// 
			this->ToolStripMenuItem_dataOutput->Name = L"ToolStripMenuItem_dataOutput";
			this->ToolStripMenuItem_dataOutput->Size = System::Drawing::Size(252, 49);
			this->ToolStripMenuItem_dataOutput->Text = L"����� ������";
			// 
			// ToolStripMenuItem_choiceServices
			// 
			this->ToolStripMenuItem_choiceServices->Name = L"ToolStripMenuItem_choiceServices";
			this->ToolStripMenuItem_choiceServices->Size = System::Drawing::Size(240, 49);
			this->ToolStripMenuItem_choiceServices->Text = L"����� ������";
			// 
			// ToolStripMenuItem_search
			// 
			this->ToolStripMenuItem_search->Name = L"ToolStripMenuItem_search";
			this->ToolStripMenuItem_search->Size = System::Drawing::Size(333, 49);
			this->ToolStripMenuItem_search->Text = L"����� ����������";
			// 
			// ToolStripMenuItem_adddata
			// 
			this->ToolStripMenuItem_adddata->Name = L"ToolStripMenuItem_adddata";
			this->ToolStripMenuItem_adddata->Size = System::Drawing::Size(338, 49);
			this->ToolStripMenuItem_adddata->Text = L"���������� ������";
			// 
			// ToolStripMenuItem_info
			// 
			this->ToolStripMenuItem_info->Name = L"ToolStripMenuItem_info";
			this->ToolStripMenuItem_info->Size = System::Drawing::Size(162, 49);
			this->ToolStripMenuItem_info->Text = L"�������";
			// 
			// ToolStripMenuItem_exit
			// 
			this->ToolStripMenuItem_exit->Name = L"ToolStripMenuItem_exit";
			this->ToolStripMenuItem_exit->Size = System::Drawing::Size(224, 49);
			this->ToolStripMenuItem_exit->Text = L"����� �� ��";
			this->ToolStripMenuItem_exit->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_exit_Click);
			// 
			// ToolStripMenuItem_safe
			// 
			this->ToolStripMenuItem_safe->Name = L"ToolStripMenuItem_safe";
			this->ToolStripMenuItem_safe->Size = System::Drawing::Size(195, 49);
			this->ToolStripMenuItem_safe->Text = L"���������";
			// 
			// database
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2032, 712);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"database";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/*��������� ������� �� ������ ����� �� ��*/
private: System::Void ToolStripMenuItem_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	/*���� �����-�� ������ ���� ��������*/
	if (save == false)
		switch (MessageBox::Show("��� ������ �� ���� ������ ��� ������������� ������ ����� ��������.\n��������� ���������?", "��������", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning)) {
		case System::Windows::Forms::DialogResult::Yes: ToolStripMenuItem_safe_Click(sender, e);  break;
		case System::Windows::Forms::DialogResult::No:break;
		case System::Windows::Forms::DialogResult::Cancel: return;
		}
	Owner->Show();
	this->Hide();
}
}
};
}
