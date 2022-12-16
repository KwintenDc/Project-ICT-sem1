using System;
using System.Collections.Generic;
using System.Linq;
using System.Security;
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
				if (value != "")
					username = value;
				else
					username = "NA";
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
				else
					password = "NA";
			}
		}

		public string ToonWachtwoord()
		{
				return $"Uw wachtwoord is : {Password}";
		}
    }
}
