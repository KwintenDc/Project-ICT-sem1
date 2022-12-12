using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vives
{
    internal class User
    {
		private string username;

		public string UserName
		{
			get { return username; }
			set 
			{ 
				if(value != "")
					username = value; 
			}
		}

		private string password;

		public string Password
		{
			get { return password; }
			set 
			{
                if (value != "")
                    password = value; 
			}
		}
    }
}
