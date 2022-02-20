#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;


// GITAR SORUSU
// Soruda bizden istenilen şey tam olarak şu :
// 6 tane gitar teli var ve her birinde fretler (perde) var
// bunlara bize verilen querydeki bilgilerle basabiliyoruz ancak eğer en son
// basılı tuttuğumuz fretin gerisinde bir frete basmak istiyorsak önce parmağımızı
// kaldırmamız gerekiyor. Ancak ilerideki bir frete basmak istiyorsak kaldırmamıza gerek yok
// Tam bir stack sorusu bu yüzden 6 elemanlı içine stack alan bir vektör oluşturdum ve
// querylere göre işlem yaptım.

int main() {
    int n, f;
    cin >> n>> f;
    
    vector<stack<int>> vt(6);
    int total = 0;
    
    for(int i = 0 ; i < n ; i++){
        
        int a,b;
        cin >> a >> b;
        a--; // to make it 0-indexed
        
        
        if ( vt[a].size() == 0){
            // first check if it has any element to avoid accesing non-exist element
            vt[a].push(b);
            total++;
        }
        else if ( vt[a].top() == b ){
            //we don't move our finger
        }
        else if ( vt[a].top() < b ){
            // if the fret we will play is higher, then we can
            // just play it without having to move our finger
            vt[a].push(b);
            total++; // we've done 1 move
        }
        else { //  top > b : if the fre we will play is lower
            // which means we have to put up our finger till
            // top of the stack is lower or the stack is empty
            while ( vt[a].top() > b ) {
                vt[a].pop();
                total++;
                
                // check if the stack becomes empty or not
                if ( vt[a].size() == 0 ){
                    vt[a].push(b);
                    total++;
                }
            }
            if ( vt[a].top() != b ){ // if they were equal we didn't have to pu our finger up
                vt[a].push(b);
                total++;
            }
            
        }
        
    }
    cout << total << '\n';
    

    return 0;
}
