/*


   create git repository
git init
  git add README.md
    git commit -m "first commit"
      git remote add origin https://github.com/RCuser/Testing.git
        git push -u origin master



        check differece and add and push changes to project
        git diff to see changes currently made
        git add -A (or just file name instead of -A)
        git commit -m ""
        git pull origin master
        git push origin master


        create branch to not affect master branch
        git branch intB (any name besides intB)
        git checkout intB (to switch to it)
        git push -u origin intB 


        merge branchs
        git checkout master
        git pull origin master
        git branch --merged
        git merge intB
        git push origin master

 */
#include<iostream>
using namespace std;
int main() {

    cout << "Hello World\n";
    int a;
    int b;
    return 0;


}
