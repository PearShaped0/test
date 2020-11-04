#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    unsigned int a = 0;
    int result = 0;
    
    cout << "Hello! This is a test of what kind of dog you are." << endl;
    cout << "Нou will be asked for a statement and rate how much you agree with it from 0 to 5" << endl;
    cout << "Press Enter to continue" << endl;
    cin.get();
    cout << "A dog is a human's best friend." << endl;
    cin >> a;
    result += a;
    cout << "It is better to walk than to sleep." << endl;
    cin >> a;
    result += a;
    cout << "I like to wallow in the dirt." << endl;
    cin >> a;
    result += a;
    cout << "I hate cats." << endl;
    cin >> a;
    result += a;
    cout << "The main thing in life is to be happy." << endl;
    cin >> a;
    result += a;
    
    
    if(result < 9){
        cout << "You are a real cat! Why are you taking this test?" << endl;
    }
    else if (result > 9 && result < 15){
        cout << "You little dog! Chihuahua or Pomeranian." << endl;
    }
    else if (result >= 15 && result < 20){
        cout << "You are an average dog, maybe a Dachshund or a Beagle!" << endl;
    }
    else if (result >= 20){
        cout << "You are a real huge dog! Probably a Sheepdog or Labrador." << endl;
    }
    


    return 0;
}
