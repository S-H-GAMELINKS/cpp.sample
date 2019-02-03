#include <iostream>
#include <array>
#include <string>
#include <cmath>

// 各データの最大値＆最小値
constexpr int w_max = 100;
constexpr int w_min = 20;
constexpr int h_max = 200;
constexpr int h_min = 100;
constexpr int b_max = 30;
constexpr int b_min = 10;
constexpr double bmi_coefficient = 10000.0;

//入力データの最大値＆最小値チェック
bool check(const int& var, const int& min, const int& max){
  bool min_check = min <= var;
  bool max_check = var <= max;
  bool check = (min_check && max_check);
  return check;
}

//argvのチェック
bool check_argv(const std::array<double, 3> data){
  bool height = check(data[0], w_min, w_max);
  bool weight = check(data[1], h_min, h_max);
  bool bmi = check(data[2], b_min, b_max);
  bool check = height && weight && bmi;
  return check;
}

double calc_bmi(const double& height, const double& weight){
  double bmi = weight / height / height * bmi_coefficient;
  return bmi;
}

int calc_kg(const std::array<double, 3>& data) {
   const double weight = data[0];
   const double height = data[1];
   
   const double bmi = calc_bmi(height, weight) - data[2];
   double kg;
    
   if (bmi > 0)
       kg = std::abs(bmi) * height * height / bmi_coefficient;
   else
       kg = 0;
    
   return std::ceil(kg);   
}

int main(int argc, char *argv[]) {

  std::array<double, 3> data;

  for (int i = 0; i < 3; i++) {
    std::string str;
    std::cin >> str;
    data[i] = std::atof(str.c_str());
  }
  
  if(check_argv(data))
    std::cout << calc_kg(data);
  else
    std::cout << 0;
 
  return 0;
}
