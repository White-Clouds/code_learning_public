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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnLogin_Click(object sender, EventArgs e)
        {
            if (txtName.Text == "" || txtPassword.Text == "")
            {
                MessageBox.Show("用户名和密码不能为空！");
            }
            else if (txtName.Text == "admin" && txtPassword.Text == "admin")
            {
                MessageBox.Show("登录成功！");
            }
            else
            {
                MessageBox.Show("用户名或密码错误！");
            }
        }
    }
}
