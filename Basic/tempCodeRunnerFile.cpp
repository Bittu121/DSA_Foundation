int main()
{
  int basicSalary;
  cout << "Enter basic salary" << endl;
  cin >> basicSalary;
  char grade;
  int Allow;
  cin >> grade;
  double HRA, DA, PF;
  HRA = (0.5 * basicSalary);
  DA = (0.2 * basicSalary);
  PF = (0.11 * basicSalary);
  if (grade = 'A')
  {
    Allow = 1700;
  }
  else if (grade = 'B')
  {
    Allow = 1500;
  }
  else
  {
    Allow = 1300;
  }
  long double totalSalary = basicSalary + HRA + DA + Allow - PF;
  int ts = round(totalSalary);
  cout << ts << endl;
  return 0;
}