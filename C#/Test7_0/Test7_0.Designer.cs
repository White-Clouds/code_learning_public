namespace Test7_1
{
    partial class Test7_0
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
            this.labUsername = new System.Windows.Forms.Label();
            this.txtUsername = new System.Windows.Forms.TextBox();
            this.labPassword = new System.Windows.Forms.Label();
            this.txtPassword = new System.Windows.Forms.TextBox();
            this.labSex = new System.Windows.Forms.Label();
            this.radioMale = new System.Windows.Forms.RadioButton();
            this.radioFemale = new System.Windows.Forms.RadioButton();
            this.labHobby = new System.Windows.Forms.Label();
            this.chkSwim = new System.Windows.Forms.CheckBox();
            this.chkFootball = new System.Windows.Forms.CheckBox();
            this.chkMusic = new System.Windows.Forms.CheckBox();
            this.button1 = new System.Windows.Forms.Button();
            this.btnReset = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // labUsername
            // 
            this.labUsername.AutoSize = true;
            this.labUsername.Location = new System.Drawing.Point(85, 50);
            this.labUsername.Name = "labUsername";
            this.labUsername.Size = new System.Drawing.Size(94, 21);
            this.labUsername.TabIndex = 0;
            this.labUsername.Text = "用户名：";
            // 
            // txtUsername
            // 
            this.txtUsername.Location = new System.Drawing.Point(186, 45);
            this.txtUsername.Name = "txtUsername";
            this.txtUsername.Size = new System.Drawing.Size(183, 31);
            this.txtUsername.TabIndex = 1;
            // 
            // labPassword
            // 
            this.labPassword.AutoSize = true;
            this.labPassword.Location = new System.Drawing.Point(85, 108);
            this.labPassword.Name = "labPassword";
            this.labPassword.Size = new System.Drawing.Size(73, 21);
            this.labPassword.TabIndex = 2;
            this.labPassword.Text = "密码：";
            // 
            // txtPassword
            // 
            this.txtPassword.Location = new System.Drawing.Point(186, 104);
            this.txtPassword.Name = "txtPassword";
            this.txtPassword.PasswordChar = '*';
            this.txtPassword.Size = new System.Drawing.Size(183, 31);
            this.txtPassword.TabIndex = 3;
            // 
            // labSex
            // 
            this.labSex.AutoSize = true;
            this.labSex.Location = new System.Drawing.Point(85, 167);
            this.labSex.Name = "labSex";
            this.labSex.Size = new System.Drawing.Size(73, 21);
            this.labSex.TabIndex = 4;
            this.labSex.Text = "性别：";
            // 
            // radioMale
            // 
            this.radioMale.AutoSize = true;
            this.radioMale.Location = new System.Drawing.Point(186, 166);
            this.radioMale.Name = "radioMale";
            this.radioMale.Size = new System.Drawing.Size(56, 25);
            this.radioMale.TabIndex = 5;
            this.radioMale.TabStop = true;
            this.radioMale.Text = "男";
            this.radioMale.UseVisualStyleBackColor = true;
            // 
            // radioFemale
            // 
            this.radioFemale.AutoSize = true;
            this.radioFemale.Location = new System.Drawing.Point(277, 166);
            this.radioFemale.Name = "radioFemale";
            this.radioFemale.Size = new System.Drawing.Size(56, 25);
            this.radioFemale.TabIndex = 6;
            this.radioFemale.TabStop = true;
            this.radioFemale.Text = "女";
            this.radioFemale.UseVisualStyleBackColor = true;
            // 
            // labHobby
            // 
            this.labHobby.AutoSize = true;
            this.labHobby.Location = new System.Drawing.Point(85, 227);
            this.labHobby.Name = "labHobby";
            this.labHobby.Size = new System.Drawing.Size(73, 21);
            this.labHobby.TabIndex = 7;
            this.labHobby.Text = "爱好：";
            // 
            // chkSwim
            // 
            this.chkSwim.AutoSize = true;
            this.chkSwim.Location = new System.Drawing.Point(186, 227);
            this.chkSwim.Name = "chkSwim";
            this.chkSwim.Size = new System.Drawing.Size(78, 25);
            this.chkSwim.TabIndex = 8;
            this.chkSwim.Text = "游泳";
            this.chkSwim.UseVisualStyleBackColor = true;
            // 
            // chkFootball
            // 
            this.chkFootball.AutoSize = true;
            this.chkFootball.Location = new System.Drawing.Point(270, 227);
            this.chkFootball.Name = "chkFootball";
            this.chkFootball.Size = new System.Drawing.Size(78, 25);
            this.chkFootball.TabIndex = 9;
            this.chkFootball.Text = "足球";
            this.chkFootball.UseVisualStyleBackColor = true;
            // 
            // chkMusic
            // 
            this.chkMusic.AutoSize = true;
            this.chkMusic.Location = new System.Drawing.Point(354, 227);
            this.chkMusic.Name = "chkMusic";
            this.chkMusic.Size = new System.Drawing.Size(78, 25);
            this.chkMusic.TabIndex = 10;
            this.chkMusic.Text = "音乐";
            this.chkMusic.UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(186, 330);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(99, 45);
            this.button1.TabIndex = 11;
            this.button1.Text = "注册";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // btnReset
            // 
            this.btnReset.Location = new System.Drawing.Point(313, 330);
            this.btnReset.Name = "btnReset";
            this.btnReset.Size = new System.Drawing.Size(96, 45);
            this.btnReset.TabIndex = 12;
            this.btnReset.Text = "重置";
            this.btnReset.UseVisualStyleBackColor = true;
            this.btnReset.Click += new System.EventHandler(this.btnReset_Click);
            // 
            // Test7_1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(11F, 21F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnReset);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.chkMusic);
            this.Controls.Add(this.chkFootball);
            this.Controls.Add(this.chkSwim);
            this.Controls.Add(this.labHobby);
            this.Controls.Add(this.radioFemale);
            this.Controls.Add(this.radioMale);
            this.Controls.Add(this.labSex);
            this.Controls.Add(this.txtPassword);
            this.Controls.Add(this.labPassword);
            this.Controls.Add(this.txtUsername);
            this.Controls.Add(this.labUsername);
            this.Name = "Test7_1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labUsername;
        private System.Windows.Forms.TextBox txtUsername;
        private System.Windows.Forms.Label labPassword;
        private System.Windows.Forms.TextBox txtPassword;
        private System.Windows.Forms.Label labSex;
        private System.Windows.Forms.RadioButton radioMale;
        private System.Windows.Forms.RadioButton radioFemale;
        private System.Windows.Forms.Label labHobby;
        private System.Windows.Forms.CheckBox chkSwim;
        private System.Windows.Forms.CheckBox chkFootball;
        private System.Windows.Forms.CheckBox chkMusic;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button btnReset;
    }
}

