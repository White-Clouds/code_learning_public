using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Test7_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnShow_Click(object sender, EventArgs e)
        {
            StringBuilder str = new StringBuilder();
            str.Append("姓名为：").Append(txtName.Text);
            str.Append(" 班级为：").Append(txtClass.Text);
            str.Append(" 性别为：").Append(radioMale.Checked ? "男" : radioFemale.Checked ? "女" : "");
            str.Append(" 爱好为：");
            if (checkGame.Checked) str.Append("游戏 ");
            if (checkComputer.Checked) str.Append("电脑 ");
            if (checkTravel.Checked) str.Append("旅游 ");
            if (checkShop.Checked) str.Append("逛街 ");
            richTextBoxInfo.Text = str.ToString();
        }
    }
}
