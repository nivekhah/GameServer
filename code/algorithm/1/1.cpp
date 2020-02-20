#include <iostream>
#include <iterator>
#include <vector>


// std::rotate(A,B,C)  将B到C位置的元素挪到A的前面
// 如题：input: 1 5 3 5 6 7 100
//       output: 6 7 100 5 1 5 3
// 解释 将位置3之后的放到前面 将位置3之前的放在后面


//在原来的Vector上操作 
void changeOrder(std::vector<int>& objects,int ops){
    // 位置小于0的断言退出
    assert(pos >= 0 );
    // 位置大于vector长度的断言退出
    assert(pos < object.size());
    
    //使用std::rotate()函数
    std::rotate(objects.begin(),objects.begin()+pos,objects.end());

    std::rotate(objects.begin(),objects.begin()+1,objects.begin()+(object.size-pos));

}


//新建一个Vector 复制元素来操作
std::vector<int> changeOrderCopy(const std::vector<int>& objects,int ops){
    assert(pos >= 0)
    assert(pos <= objects.size())
    //将pos位置以后的数据来新建vector
    std::vector<int>v(objects.begin()+pos+1,objects.end());
    //将pos位置元素插入vector
    v.push_back_objects(objects[pos]);
    //将pos位置之前的数据插入vector 在V的末端插入 
    v.insert(v.end(),objects.begin(),objects.begin()+pos);
    return v;
}







