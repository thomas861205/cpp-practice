// 您也可以將某個類別宣告為friend類別，被宣告為friend的類別可以直接存取私用成員，例如：
class Ball;

int compare(Ball&, Ball&);

class Ball { 
public: 
    ....
    
    // 宣告朋友類別
    friend class SomeClass;
    
private:
    ....
};

// 如上宣告的話，SomeClass的實例就可以存取Ball實例的私用成員。