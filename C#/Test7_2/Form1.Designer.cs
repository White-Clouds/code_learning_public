namespace Test7_2
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.labName = new System.Windows.Forms.Label();
            this.labClass = new System.Windows.Forms.Label();
            this.txtName = new System.Windows.Forms.TextBox();
            this.txtClass = new System.Windows.Forms.TextBox();
            this.groupBoxSex = new System.Windows.Forms.GroupBox();
            this.groupBoxHobby = new System.Windows.Forms.GroupBox();
            this.btnShow = new System.Windows.Forms.Button();
            this.radioMale = new System.Windows.Forms.RadioButton();
            this.radioFemale = new System.Windows.Forms.RadioButton();
            this.checkTravel = new System.Windows.Forms.CheckBox();
            this.checkGame = new System.Windows.Forms.CheckBox();
            this.checkShop = new System.Windows.Forms.CheckBox();
            this.checkComputer = new System.Windows.Forms.CheckBox();
            this.richTextBoxInfo = new System.Windows.Forms.RichTextBox();
            this.groupBoxSex.SuspendLayout();
            this.groupBoxHobby.SuspendLayout();
            this.SuspendLayout();
            // 
            // labName
            // 
            this.labName.AutoSize = true;
            this.labName.Location = new System.Drawing.Point(73, 41);
            this.labName.Name = "labName";
            this.labName.Size = new System.Drawing.Size(52, 21);
            this.labName.TabIndex = 0;
            this.labName.Text = "姓名";
            // 
            // labClass
            // 
            this.labClass.AutoSize = true;
            this.labClass.Location = new System.Drawing.Point(77, 100);
            this.labClass.Name = "labClass";
            this.labClass.Size = new System.Drawing.Size(52, 21);
            this.labClass.TabIndex = 1;
            this.labClass.Text = "班级";
            // 
            // txtName
            // 
            this.txtName.Location = new System.Drawing.Point(150, 35);
            this.txtName.Name = "txtName";
            this.txtName.Size = new System.Drawing.Size(177, 31);
            this.txtName.TabIndex = 2;
            // 
            // txtClass
            // 
            this.txtClass.Location = new System.Drawing.Point(150, 94);
            this.txtClass.Name = "txtClass";
            this.txtClass.Size = new System.Drawing.Size(177, 31);
            this.txtClass.TabIndex = 3;
            // 
            // groupBoxSex
            // 
            this.groupBoxSex.Controls.Add(this.radioFemale);
            this.groupBoxSex.Controls.Add(this.radioMale);
            this.groupBoxSex.Location = new System.Drawing.Point(81, 193);
            this.groupBoxSex.Name = "groupBoxSex";
            this.groupBoxSex.Size = new System.Drawing.Size(157, 117);
            this.groupBoxSex.TabIndex = 4;
            this.groupBoxSex.TabStop = false;
            this.groupBoxSex.Text = "性别";
            // 
            // groupBoxHobby
            // 
            this.groupBoxHobby.Controls.Add(this.checkComputer);
            this.groupBoxHobby.Controls.Add(this.checkShop);
            this.groupBoxHobby.Controls.Add(this.checkGame);
            this.groupBoxHobby.Controls.Add(this.checkTravel);
            this.groupBoxHobby.Location = new System.Drawing.Point(307, 193);
            this.groupBoxHobby.Name = "groupBoxHobby";
            this.groupBoxHobby.Size = new System.Drawing.Size(265, 117);
            this.groupBoxHobby.TabIndex = 5;
            this.groupBoxHobby.TabStop = false;
            this.groupBoxHobby.Text = "爱好";
            // 
            // btnShow
            // 
            this.btnShow.Location = new System.Drawing.Point(420, 74);
            this.btnShow.Name = "btnShow";
            this.btnShow.Size = new System.Drawing.Size(152, 49);
            this.btnShow.TabIndex = 6;
            this.btnShow.Text = "显示";
            this.btnShow.UseVisualStyleBackColor = true;
            this.btnShow.Click += new System.EventHandler(this.btnShow_Click);
            // 
            // radioMale
            // 
            this.radioMale.AutoSize = true;
            this.radioMale.Location = new System.Drawing.Point(27, 30);
            this.radioMale.Name = "radioMale";
            this.radioMale.Size = new System.Drawing.Size(56, 25);
            this.radioMale.TabIndex = 0;
            this.radioMale.TabStop = true;
            this.radioMale.Text = "男";
            this.radioMale.UseVisualStyleBackColor = true;
            // 
            // radioFemale
            // 
            this.radioFemale.AutoSize = true;
            this.radioFemale.Location = new System.Drawing.Point(27, 72);
            this.radioFemale.Name = "radioFemale";
            this.radioFemale.Size = new System.Drawing.Size(56, 25);
            this.radioFemale.TabIndex = 1;
            this.radioFemale.TabStop = true;
            this.radioFemale.Text = "女";
            this.radioFemale.UseVisualStyleBackColor = true;
            // 
            // checkTravel
            // 
            this.checkTravel.AutoSize = true;
            this.checkTravel.Location = new System.Drawing.Point(25, 29);
            this.checkTravel.Name = "checkTravel";
            this.checkTravel.Size = new System.Drawing.Size(78, 25);
            this.checkTravel.TabIndex = 0;
            this.checkTravel.Text = "旅游";
            this.checkTravel.UseVisualStyleBackColor = true;
            // 
            // checkGame
            // 
            this.checkGame.AutoSize = true;
            this.checkGame.Location = new System.Drawing.Point(25, 71);
            this.checkGame.Name = "checkGame";
            this.checkGame.Size = new System.Drawing.Size(78, 25);
            this.checkGame.TabIndex = 1;
            this.checkGame.Text = "游戏";
            this.checkGame.UseVisualStyleBackColor = true;
            // 
            // checkShop
            // 
            this.checkShop.AutoSize = true;
            this.checkShop.Location = new System.Drawing.Point(122, 29);
            this.checkShop.Name = "checkShop";
            this.checkShop.Size = new System.Drawing.Size(78, 25);
            this.checkShop.TabIndex = 2;
            this.checkShop.Text = "逛街";
            this.checkShop.UseVisualStyleBackColor = true;
            // 
            // checkComputer
            // 
            this.checkComputer.AutoSize = true;
            this.checkComputer.Location = new System.Drawing.Point(122, 71);
            this.checkComputer.Name = "checkComputer";
            this.checkComputer.Size = new System.Drawing.Size(78, 25);
            this.checkComputer.TabIndex = 3;
            this.checkComputer.Text = "电脑";
            this.checkComputer.UseVisualStyleBackColor = true;
            // 
            // richTextBoxInfo
            // 
            this.richTextBoxInfo.Location = new System.Drawing.Point(81, 341);
            this.richTextBoxInfo.Name = "richTextBoxInfo";
            this.richTextBoxInfo.Size = new System.Drawing.Size(491, 218);
            this.richTextBoxInfo.TabIndex = 7;
            this.richTextBoxInfo.Text = "";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(11F, 21F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(656, 606);
            this.Controls.Add(this.richTextBoxInfo);
            this.Controls.Add(this.btnShow);
            this.Controls.Add(this.groupBoxHobby);
            this.Controls.Add(this.groupBoxSex);
            this.Controls.Add(this.txtClass);
            this.Controls.Add(this.txtName);
            this.Controls.Add(this.labClass);
            this.Controls.Add(this.labName);
            this.Name = "Form1";
            this.Text = "Form1";
            this.groupBoxSex.ResumeLayout(false);
            this.groupBoxSex.PerformLayout();
            this.groupBoxHobby.ResumeLayout(false);
            this.groupBoxHobby.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labName;
        private System.Windows.Forms.Label labClass;
        private System.Windows.Forms.TextBox txtName;
        private System.Windows.Forms.TextBox txtClass;
        private System.Windows.Forms.GroupBox groupBoxSex;
        private System.Windows.Forms.GroupBox groupBoxHobby;
        private System.Windows.Forms.Button btnShow;
        private System.Windows.Forms.RadioButton radioMale;
        private System.Windows.Forms.RadioButton radioFemale;
        private System.Windows.Forms.CheckBox checkGame;
        private System.Windows.Forms.CheckBox checkTravel;
        private System.Windows.Forms.CheckBox checkComputer;
        private System.Windows.Forms.CheckBox checkShop;
        private System.Windows.Forms.RichTextBox richTextBoxInfo;
    }
}

