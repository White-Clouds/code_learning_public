using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Test7_1
{
    public partial class Test7_0 : Form
    {
        public Test7_0()
        {
            InitializeComponent();
        }

        private void btnReset_Click(object sender, EventArgs e)
        {
            txtUsername.Text = "";
            txtPassword.Text = "";
            radioMale.Checked = false;
            radioFemale.Checked = false;
            chkSwim.Checked = false;
            chkFootball.Checked = false;
            chkMusic.Checked = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            bool flag = true;
            if (string.IsNullOrEmpty(txtUsername.Text))
            {
                flag = false;
            }
            if (string.IsNullOrEmpty(txtPassword.Text))
            {
                flag = false;
            }
            if (this.radioMale.Checked == false && this.radioFemale.Checked == false)
            {
                flag = false;
            }
            if (flag)
            {
                MessageBox.Show("注册成功！");
            }
            else {
                MessageBox.Show("注册失败！");
            }
        }
    }
}
