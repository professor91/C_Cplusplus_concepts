
/*
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)


size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

vector::begin() and vector::end()
vector rbegin() and rend()
vector::cbegin() and vector::cend()
vector::crend() and vector::crbegin()
vector::assign()
vector::at()
vector::back()
vector::capacity()
vector::clear()
vector::push_back()
vector::pop_back()
vector::empty()
vector::erase()
vector::size()
vector::swap()
vector::reserve()
vector::resize()
vector::shrink_to_fit()
vector::operator=
vector::operator[]
vector::front()
vector::data()
vector::emplace_back()
vector::emplace()
vector::max_size()
vector::insert()
*/

#include<iostream>
#include<vector>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int main()
{
    std:: vector<int> vert;

    for(int i = 0; i < 5; i++)
        vert.push_back(i);
    
    for(auto i = vert.begin(); i != vert.end(); i++)
        log(*i << " ");


    std:: cin.get();
    return 0;
}
