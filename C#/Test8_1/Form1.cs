using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Test8_1
{
    public partial class Form1 : Form
    {
        private Dictionary<string, List<string>> provinceCityMap;

        public Form1()
        {
            InitializeComponent();
            Load += new EventHandler(Form1_Load);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            provinceCityMap = new Dictionary<string, List<string>>
            {
                { "Province1", new List<string> { "City1-1", "City1-2", "City1-3" } },
                { "Province2", new List<string> { "City2-1", "City2-2", "City2-3" } }
            };

            cmbProvince.Items.AddRange(new string[] { "Province1", "Province2" });
            cmbProvince.SelectedIndex = 0;
        }

        private void cmbProvince_SelectedIndexChanged(object sender, EventArgs e)
        {
            string selectedProvince = cmbProvince.SelectedItem.ToString();

            cmbCity.Items.Clear();
            if (provinceCityMap.ContainsKey(selectedProvince))
            {
                cmbCity.Items.AddRange(provinceCityMap[selectedProvince].ToArray());
                if (cmbCity.Items.Count > 0)
                {
                    cmbCity.SelectedIndex = 0;
                }
            }
        }
    }
}
