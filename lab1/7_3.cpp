#include <iostream>
using namespace std;
// 3. Тариан талбайн урт, өргөн өгөгдсөн бол намар хичээн килограмм төмс хураах
// вэ? /1га-гаас хураах төмсний хэмжээг дунджаар авна/
int main() {
    int a,b,s;
    cin >> a >> b;
    // 1 га тутамд 3,7 
    // 1 га 10000 m^2
    s = a*b;
    cout << "Тариалангын талбай: " << s << endl; 
    float ga = s / 10000;
    cout << "Тариалангын га хэмжээ: " << ga << endl;
    float potato = ga * 3.7;
    cout << potato << " килограмм төмс хураана.";
    return 0;

}