#pragma once

namespace SJFScheduling {

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
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			numOfProcess = 0;
			pointer = 0;
			label6->Text = "";
			label8->Text = "";
			pictureBox1->Image = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			label9->Text = "";
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
	private: System::Windows::Forms::DataGridView^  processTable;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Process;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Arrival;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Burst;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Waiting;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Turnaround;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  arrTextBox;
	private: System::Windows::Forms::TextBox^  burstTextBox;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  AddProcessButton;
	private: System::Windows::Forms::Button^  nonpreButton;
	private: System::Windows::Forms::Button^  preButton;
	private: System::Windows::Forms::Button^  resetButton;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

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
			this->processTable = (gcnew System::Windows::Forms::DataGridView());
			this->Process = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Arrival = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Burst = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Waiting = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Turnaround = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->arrTextBox = (gcnew System::Windows::Forms::TextBox());
			this->burstTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AddProcessButton = (gcnew System::Windows::Forms::Button());
			this->nonpreButton = (gcnew System::Windows::Forms::Button());
			this->preButton = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->processTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// processTable
			// 
			this->processTable->AllowUserToAddRows = false;
			this->processTable->AllowUserToDeleteRows = false;
			this->processTable->AllowUserToOrderColumns = true;
			this->processTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->processTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Process,
					this->Arrival, this->Burst, this->Waiting, this->Turnaround
			});
			this->processTable->Location = System::Drawing::Point(12, 66);
			this->processTable->Name = L"processTable";
			this->processTable->ReadOnly = true;
			this->processTable->Size = System::Drawing::Size(574, 214);
			this->processTable->TabIndex = 0;
			// 
			// Process
			// 
			this->Process->HeaderText = L"Process";
			this->Process->Name = L"Process";
			this->Process->ReadOnly = true;
			// 
			// Arrival
			// 
			this->Arrival->HeaderText = L"Arrival Time";
			this->Arrival->Name = L"Arrival";
			this->Arrival->ReadOnly = true;
			// 
			// Burst
			// 
			this->Burst->HeaderText = L"Burst Time";
			this->Burst->Name = L"Burst";
			this->Burst->ReadOnly = true;
			// 
			// Waiting
			// 
			this->Waiting->HeaderText = L"Waiting Time";
			this->Waiting->Name = L"Waiting";
			this->Waiting->ReadOnly = true;
			// 
			// Turnaround
			// 
			this->Turnaround->HeaderText = L"Turnaround Time";
			this->Turnaround->Name = L"Turnaround";
			this->Turnaround->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(272, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Shortest Job First Scheduling Algorithm";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(692, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Add Process";
			// 
			// arrTextBox
			// 
			this->arrTextBox->Location = System::Drawing::Point(741, 96);
			this->arrTextBox->Name = L"arrTextBox";
			this->arrTextBox->Size = System::Drawing::Size(54, 20);
			this->arrTextBox->TabIndex = 3;
			// 
			// burstTextBox
			// 
			this->burstTextBox->Location = System::Drawing::Point(741, 126);
			this->burstTextBox->Name = L"burstTextBox";
			this->burstTextBox->Size = System::Drawing::Size(54, 20);
			this->burstTextBox->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(692, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Arrival";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(697, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Burst";
			// 
			// AddProcessButton
			// 
			this->AddProcessButton->Location = System::Drawing::Point(720, 152);
			this->AddProcessButton->Name = L"AddProcessButton";
			this->AddProcessButton->Size = System::Drawing::Size(75, 23);
			this->AddProcessButton->TabIndex = 7;
			this->AddProcessButton->Text = L"Add Process";
			this->AddProcessButton->UseVisualStyleBackColor = true;
			this->AddProcessButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// nonpreButton
			// 
			this->nonpreButton->Location = System::Drawing::Point(625, 212);
			this->nonpreButton->Name = L"nonpreButton";
			this->nonpreButton->Size = System::Drawing::Size(129, 41);
			this->nonpreButton->TabIndex = 8;
			this->nonpreButton->Text = L"Non Preempive";
			this->nonpreButton->UseVisualStyleBackColor = true;
			this->nonpreButton->Click += gcnew System::EventHandler(this, &MyForm::nonpreButton_Click);
			// 
			// preButton
			// 
			this->preButton->Location = System::Drawing::Point(773, 212);
			this->preButton->Name = L"preButton";
			this->preButton->Size = System::Drawing::Size(114, 41);
			this->preButton->TabIndex = 9;
			this->preButton->Text = L"Preemptive";
			this->preButton->UseVisualStyleBackColor = true;
			this->preButton->Click += gcnew System::EventHandler(this, &MyForm::preButton_Click);
			// 
			// resetButton
			// 
			this->resetButton->Location = System::Drawing::Point(901, 221);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(75, 23);
			this->resetButton->TabIndex = 10;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &MyForm::resetButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 320);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(963, 101);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 441);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Average Waiting Time: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(164, 441);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 477);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Average Turnaround Time:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(164, 477);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 301);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"label9";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 503);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->resetButton);
			this->Controls->Add(this->preButton);
			this->Controls->Add(this->nonpreButton);
			this->Controls->Add(this->AddProcessButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->burstTextBox);
			this->Controls->Add(this->arrTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->processTable);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->processTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//user defined code section 
//user defined properties
	public:
		array<int, 2> ^process = gcnew array<int, 2>(100, 6);
		int numOfProcess;
		int pointer;

	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	process[numOfProcess, 0] = numOfProcess;
	process[numOfProcess, 1] = Convert::ToInt32(arrTextBox->Text);
	process[numOfProcess, 2] = Convert::ToInt32(burstTextBox->Text);
	process[numOfProcess, 5] = 0;
	AddToProcessTable(numOfProcess);
	numOfProcess++;
	arrTextBox->Text = "";
	burstTextBox->Text = "";
	}

private: void AddToProcessTable(int pid)
{
	processTable->Rows->Add();
	processTable->Rows[pid]->Cells[0]->Value = process[pid, 0];
	processTable->Rows[pid]->Cells[1]->Value = process[pid, 1];
	processTable->Rows[pid]->Cells[2]->Value = process[pid, 2];
}

private: System::Void nonpreButton_Click(System::Object^  sender, System::EventArgs^  e) {
	label9->Text = "Gantt Chart for Non-Preemptive SJF";
	bool allExecuted;
	bool contExecution = true;

	while (contExecution)
	{
		allExecuted = true;
		int selProcess = -1;
		int x1, x2;
		//selecting a process for execution
		for (int i = 0; i < numOfProcess; i++)
		{
			if (process[i, 1] <= pointer && process[i, 5] == 0)
			{
				if (selProcess == -1)
				{
					selProcess = i;
				}
				if (process[i, 2] < process[selProcess, 2])
				{
					selProcess = i;
				}
			}
		}
		if (selProcess == -1)//for no processes cpu idle
		{
			pointer++;
		}
		else//executing process
		{
			process[selProcess, 3] = pointer - process[selProcess, 1];//waiting time=pointer-arrival time
			process[selProcess, 4] = process[selProcess, 3] + process[selProcess, 2];//turn around time=waiting time+burst time
			x1 = pointer;
			for (int j = 0; j < process[selProcess, 2]; j++)
			{
				pointer++;
			}
			x2 = pointer;
			process[selProcess, 5] = 1;//mark the process as executed
			drawGantt(selProcess, x1, x2);//draw gannt chart
		}
		for (int k = 0; k < numOfProcess; k++)//checking if all the processes got executed
		{
			if (process[k, 5] == 0)
			{
				allExecuted = false;
				break;
			}
		}
		if (allExecuted)
		{
			contExecution = false;
		}
	}
	float totWait = 0.0;
	float totTat = 0.0;
	for (int i = 0; i < numOfProcess; i++)
	{
		//filling waiting and turnaround times in process table 
		processTable->Rows[i]->Cells[3]->Value = process[i, 3];
		processTable->Rows[i]->Cells[4]->Value = process[i, 4];
		//calculating total waiting time and turnaround time
		totWait += process[i, 3];
		totTat += process[i, 4];
	}
	label6->Text = Convert::ToString(totWait / numOfProcess);
	label8->Text = Convert::ToString(totTat / numOfProcess);
}

private: System::Void preButton_Click(System::Object^  sender, System::EventArgs^  e) {
	label9->Text = "Gantt Chart for Preemptive SJF";
	for (int i = 0; i < numOfProcess; i++)//setting the last array index to the initial burst time and clearing the wait times
	{
		process[i, 5] = process[i, 2];
		process[i, 3] = 0;
	}
	bool allExecuted;
	bool contExecution = true;
	int prev = -1;
	while (contExecution)
	{
		allExecuted = true;
		int selProcess = -1;
		int x1, x2;
		//selecting a process for execution
		for (int i = 0; i < numOfProcess; i++)
		{
			if (process[i, 1] <= pointer && process[i, 5] != 0)
			{
				if (selProcess == -1)
				{
					selProcess = i;
				}
				if (process[i, 5] < process[selProcess, 5])
				{
					selProcess = i;
				}
			}
		}

		//increasing wait times of the arrived non executing processes 
		for (int i = 0; i < numOfProcess; i++)
		{
			if (process[i, 1] <= pointer && process[i, 5] != 0 && i != selProcess)
			{
				process[i, 3]++;
			}
		}

		if (prev != selProcess)//detecting process switch
		{
			if (prev != -1)
				drawGantt(prev, x1, x2);
			x1 = pointer;
			prev = selProcess;
		}
		if (selProcess == -1)//for no processes cpu idle
		{
			pointer++;
		}
		else//executing process
		{
			pointer++;
			x2 = pointer;
			process[selProcess, 5]--;
		}
		for (int k = 0; k < numOfProcess; k++)//checking if all the processes got executed
		{
			if (process[k, 5] != 0)
			{
				allExecuted = false;
				break;
			}
		}
		if (allExecuted)
		{
			drawGantt(prev, x1, x2);
			contExecution = false;
		}
	}

	float totWait = 0.0;
	float totTat = 0.0;
	for (int i = 0; i < numOfProcess; i++)
	{
		//calculating the turnaround time = waiting time + burst time
		process[i, 4] = process[i, 2] + process[i, 3];
		//filling waiting and turnaround times in process table 
		processTable->Rows[i]->Cells[3]->Value = process[i, 3];
		processTable->Rows[i]->Cells[4]->Value = process[i, 4];
		//calculating total waiting time and turnaround time
		totWait += process[i, 3];
		totTat += process[i, 4];
	}
	label6->Text = Convert::ToString(totWait / numOfProcess);
	label8->Text = Convert::ToString(totTat / numOfProcess);

}

private: void drawGantt(int pid, int x1, int x2)
{
	x1 = x1 * 10;
	x2 = x2 * 10;
	Graphics^ g = Graphics::FromImage(pictureBox1->Image);
	g->DrawRectangle(System::Drawing::Pens::Black, x1, 20, x2 - x1, 40);
	g->DrawString(pid.ToString(), gcnew System::Drawing::Font("Arial", 8), gcnew System::Drawing::SolidBrush(Color::Black), (x1 + 1), 22);
	g->DrawString((x1/10).ToString(), gcnew System::Drawing::Font("Arial", 8), gcnew System::Drawing::SolidBrush(Color::Black), x1, 60);
	g->DrawString((x2/10).ToString(), gcnew System::Drawing::Font("Arial", 8), gcnew System::Drawing::SolidBrush(Color::Black), x2, 60);
	pictureBox1->Refresh();
}

private: System::Void resetButton_Click(System::Object^  sender, System::EventArgs^  e) {
	numOfProcess = 0;
	pointer = 0;
	label6->Text = "";
	label8->Text = "";
	pictureBox1->Image = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
	processTable->Rows->Clear();
	label9->Text = "";
	}

};
}