using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Test8_2
{
    public partial class Form1 : Form
    {
        private DataTable ordersTable;

        public Form1()
        {
            InitializeComponent();
            InitializeDataTable();
            InitializeDataGridView();
        }

        private void InitializeDataTable()
        {
            ordersTable = new DataTable();
            ordersTable.Columns.Add("OrderID", typeof(int));
            ordersTable.Columns.Add("ProductName", typeof(string));
            ordersTable.Columns.Add("Quantity", typeof(int));
            ordersTable.Columns.Add("Price", typeof(decimal));

            ordersTable.Rows.Add(1, "ProductA", 10, 9.99m);
            ordersTable.Rows.Add(2, "ProductB", 5, 19.99m);
            ordersTable.Rows.Add(3, "ProductC", 2, 99.99m);
        }

        private void InitializeDataGridView()
        {
            dataGridView1.DataSource = ordersTable;
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            string searchValue = txtSearch.Text.Trim().ToLower();
            DataView dv = ordersTable.DefaultView;
            dv.RowFilter = $"ProductName LIKE '%{searchValue}%'";
            dataGridView1.DataSource = dv;
        }
    }
}
