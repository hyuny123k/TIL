# Ruby



루비는 Powerful하고 flexible한 프로그래밍 언어입니다.

잘 알려진 Ruby On Rails Web framework를 이용하여 Web/Internet 개발 혹은 게임 등 다양한 개발을 할 수 있습니다.



- **High-level**
  : 루비는 의미를 파악하거나(reading) 쓰는것(writing)이 매우 쉽습니다.



- **Interperted**
  : 별도의 Compiler가 필요하지 않습니다. 



- **Object-Oriented**
  :  사용자는 프로그램 빌드 및 실행을 위해 객체라는 데이터 구조를 조작할 수 있습니다. 



- **Easy to use**
  : 다른 언어에 비해 사용하기가 매우 쉽습니다..

------

**Data Types : Numbers , Strings, Booleans**

Numbers(숫자) , Strings("문장"), Booleans( 참과 거짓  )



```ruby
ex)

#Numbers Type을 사용한 예제코드
my_num = 25 

#Booleans Type을 사용한 예제코드
my_boolean = true

#Strings Type을 사용한 예제코드
my_string = "ruby"

#my_num,boolean,string에 할당된 값들을 출력해준다
puts my_num
puts my_boolean
my_string
```



------

**Varialbes**
컴퓨터 프로그래밍을 하면서 중요한 기본 컨셉중 하나가 바로 '변수'이다.

할당 연산자 '=' 을 사용하여 사용자가 지정한 변수에 값을 할당해줄수 있다.



```ruby
ex)

# my_num 이란 변수에 100이라는 값을 할당해주었다.

my_num = 100

puts my_num

```

이렇게 변수에 값을 할당해주면 값이 변수에 저장되어 사용자가 특정한 행동을 하기 전까지는 할당된 변수에 값이 계속해서 존재하게 된다,



------

**Math**

루비에서는 여섯가지의 산술 연산자를 사용할 수 있다.

+(더하기), -(빼기), *(곱하기), /(나누기), **(지수화), *(나머지)



```ruby
ex)

num1 = 2+2 # 4
num2 = 5-3 # 2
num3 = 6*2 # 12
num4 = 7/3 # 2 , 7을 3으로 나눌때 몫이 2이므로 2가 할당된다.         
num5 = 3**2 #9 , 3의 2제곱과 같은 뜻이다
num6 = 4%3  #1 , 4를 3으로 나눌때 1 나머지로 남게된다.

```

------

**Puts and Print**

print 커맨드는 화면에 출력을 해주는 커맨드이다.

;(semicolon)이나  ( , ) (parentheses) 가 필요없다.



```ruby
ex)

puts "hello"
print "abcd"

# Run을 시키면 hello
#			 abcd  와 같이 출력된다	
# 만약, puts -> print 순서가 아닌 반대 순서로 코드를 작성한다면
# 화면에는 개행되지 않고 abcdhello 로 출력된다.
```

결과적으로 **puts**는 string에 대한 개행을 자신 다음에 시켜준다.

하지만 **print**는 string에 대한 자동개행이 없다.



------

Ruby의 모든 것은 하나의 객체이기 때문에 Ruby의 모든 기능에는 **Method**
라는 내장된 기능이 있습니다. Interpreter는 작성한 코드를 실행하는 프로그램이며, 편집기에 코드를 입력하면 Interpreter가 코드를 읽고 console에 코드를 실행한 결과를 표시합니다.        



------

**Method**



1. **' .length ' method**
   .length 메소드는 string의 길이를 check해주는 메소드입니다.

```ruby
ex)

# 다음과 같이 코드를 작성하면 화면에 출력되진않고 내부적으로
# length가 계산되기만 합니다

"Hello World!".length

# 다음과 같이 코드를 작성하면 화면에 출력되고
# 만약 length 값을 사용하고 싶으면 값은 변수에 저장하거나
# 다양한 방법으로 활용할 수도 있습니다

A = "Hello".length

puts abc
5
```



2. **' .reverse ' method**

   .reverse 메소드는 입력받은 string을 말그대로 reverse 해주는 메소드 입니다.

```ruby
ex)

# 다음과 같이 코드를 작성하면 결과값은
puts "Hello".reverse

# 다음과 같이 나타나게 됩니다.
# 일종의 정렬에 해당하기 때문에(lowest -> highest / highest -> lowest) 다른 Sort 방법도 존재한다.
olleH

```



3. **' upcase & downcase ' method**

   .upcase & .downcase 메소드는 입력받은 string 전체를 UPPER CASE로 변환하거나 lower case로 변환합니다.

```ruby
ex)

# 다음과 같이 코드를 작성하면 결과값은
puts "hello".upcase
puts "ABCDE".downcase

HELLO
abcde
```



****

**Comment**

Ruby에서 주석을 작성하는 방법은 single-line과 multi-line으로 작성하는 방법 두 가지가 있습니다. 

```ruby
ex)

# <- '#'을 사용하면 single-line 주석을 작성할 수 있습니다.

=begin
'=begin .... =end'을 사용하면
multi-line 주석을
작성할 수
있습니다.
=end

# =begin 과 =end 가 작성되는 line에는
# 이를 제외한 다른 code가 작성되어서는 안됩니다.
```





------



1. **gets method**

   gets 메소드는 user로부터 string을 입력 받을 수 있는. 즉, get string 작업을 수행하는 메소드입니다. Enter키를 누르기 전까지 user가 입력한 내용을 그대로 get 합니다.
   ​

2. **chomp method**

   gets 메소드와 같이 자주 쓰이는 메소드는 바로 chomp 메소드 입니다.

   문자열을 입력 받을때 마지막에 입력되는 Enter키를 무시하여 문자열 출력시에 Enter키가 적용되지 않도록 해줍니다.

```ruby
ex)

print "안녕하세요, 이름을 입력해주세요"
name = gets.chomp
print name
print name

# puts와 달리 자동개행이 없는 print를 사용하여 name을 연속으로 두번 출력할 경우 실행결과는 다음과 같습니다.

namename

# 만약 get.chomp가 아닌 get 메소드만 사용한다면 우리가 문자열의 입력을 끝마칠때 입력하는 Enter키가 입력되어 다음과 같이 출력됩니다.

name
name

#gets.chomp 와 gets의 차이를 직접 알아보는것이 좋습니다.

```





3. **String interpolation(문자열 보간)**

   string interpolation은 문자열을 대체해주는 기능입니다. 
   예를 들면

```ruby
ex)

name = "john"

print "My name is #{name}."

# 위와 같이 코드를 작성하여 실행하면 다음과 같은 결과를 얻을 수 있습니다.

My name is john.
```

예제와 같이 name 변수에 저장되어 있는 "john"이란 문자열이 #{name}에 해당하는 위치에 대체되어 출력됩니다. #{ } 내부에 어떤 변수가 위차하느냐에 따라서 출력되는 값도 달라지게 됩니다.



4. **Capitalize method**
   Capitalze method는 first letter를 upcase로 만들어주고 나머지 letter를 lower case로 변환합니다.

```ruby
ex)

variable = "HELLO"
print variable.capitalize

# 위와 같은 코드를 실행하게 되면
HELLO #가 아닌
Hello #가 출력됩니다

# first letter 를 제외한 letter들을 lower case로 변환하기 때문입니다.
```

capitalize 메소드 뒤에 " ! " 를 붙여주면 일시적으로 first letter 와 나머지 letter들이 변경되는 것이 아니라 capitalize! 메소드 사용 이후에는 지속적으로 변환된 상태를 유지하게 됩니다.

```ruby
ex)

val = "hello"
print val.capitalize!
print val

# 위와 같은 코드를 실행하게 되면
# 다음과 같은 결과가 출력됩니다.
Hello
Hello

# capitalize! 가 아닌 capitalize를 사용했다면
Hello
hello

# 위와 같은 결과가 출력됩니다.

```



5.  **if**
   if 문은 사용하면 우리는 true , false의 경우에 따라 분기를 나눌 수 있습니다.

   Ruby 에선 if문을 선언하고 마지막에 end를 코드에 작성해주어야 완전한 if문으로 동작합니다. if문의 조건에 부합하는 true의 경우에는 코드가 동작하지만 false의 경우에는 코드가 동작하지 않고 pass 됩니다.

```ruby
ex)

if 0 < 1
	print "0 is less than 1"
end

# 위와 같은 코드를 실행하게되면

0 is lower than 1

# 정상적으로 print문이 동작하여 출력됩니다.
# 만약, 조건을 0 < 1이 아닌 0 > 1 과 같이 false 인 조건을 입력해주면
# if문 아래에 있는 코드는 동작하지 않고 pass 됩니다.


```

​	if문에서 빼놓을 수 없는 것이 바로 else 입니다.

​	else를 사용할 경우 if문의 조건에 따라 실행결과가 달라집니다.

```ruby
ex)

# 위의 예제 코드의 조건을 0 > 1 로 수정하고 else를 추가하여 작성하면
# 실행결과는 조건이 false인 첫번째 코드는 동작하지 않고

if 0 > 1
	print " 0 is less than 1"
else
	print " FALSE "
end

# else 문이 동작하여 FALSE가 출력됩니다.
```

​	else의 경우에는 조건이 없기 때문에 위쪽에서 조건이 부합하지 않을경우
​	else문에 도달하면 무조건 실행됩니다.

​	하지만 else 가 아닌 elsif를 사용하게 되면 조건을 추가하여 코드의 실행여부
​	를 제어할 수 있습니다.

```ruby
ex)

x = 5
y = 5

if x < y
  puts " x is less than y"
elsif x > y
  puts " x is greater than y"
else
  puts " x equals y"
end

# 위와 같은 코드를 작성하여 실행하게 되면 x와 y의 값이 같으므로
# 첫번째 if문과 두번째 elsif문은 실행되지않고 pass 되고
# 마지막에 위치하는 else문이 실행되어

x equals y 

# 가 출력됩니다.
```



6. **unless**
   if와는 달리 unless문은 false일 때 동작합니다.

   예를 들면,

```ruby
ex)

val = true

unless val
  puts " A "
else 
  puts " B "
end

# 위와 같은 코드를 실행하게 되면, val이 true 이므로 결과값은
B

# 만약 val = false 라면 A 가 출력된다.
# 그리고 다음과 같이 다양하게 표현할 수 있다.

unless 1 < 0
  puts "this is false"
else
  puts "this is true"
end

unless true
  puts ....
    ....
end
```



7. **Relational operator(Comparator)**

   " = " 과 같은 연산자를 assignment operator라고 한다.

   이것은 단순히 할당해주는 연산자로 사용되지만,

   " == " , " != " .... 이렇게 표현되는 연산자는 비교 혹은 관계 연산자라 불리며 변수간의 관계를 판단하는데 사용된다.

```ruby
ex)

x = 2
y = 2

if x == y # 이렇게 표현되면 x 와 y의 값이 같으므로 true로 판단된다.
	print " x equal y"
end

if x != y # x와 y의 값이 같은데 이 표현은 false 이므로
     print " x equal y"	 #코드가 실행되지 않고 pass된다.
end
```

​	동일한지의 여부를 판단하는 "==", "!=" 가 있다면,

​	크기의 여부를 판단하는 "<",">","<=",">=" 이 있다.

- Less than : **<**
- Less than or equal to : **<=**
- Greater than : **>**
- Greater than or equal to : **>=**



8. **Logical or Boolean operator**

   논리적으로 true 인지 false인지 판단해주는 연산자이다.

- And : &&
- OR : ||
- NOT : !

```ruby
ex)

true && true # => true
true && false # => false
false && true # => false
false && false # => false

true || true # => true
true || false # => true
false || true # => true
false || false # => false

!true # => false
!false #=> true

```





------



1. **include method**

   include method를 사용하면 user가 부여한 조건에 부합하는것이 포함되어있는지 check 해준다.

   ```ruby
   ex)

   print "please enter a something: "
   user_input = gets.chomp
   user_input.downcase!

   if user_input.include? "s"
   	print "string has s"
   end

   # 위와 같이 include 메소드를 사용하면 user가 입력한 string에 조건에 부합하는 것이 포함되어 있는지
   # check 하여 true or false 값을 반환한다.

   ```



2. gsub method

   gsub method를 사용하면 사용자가 부여하는 조건에 부합하는 문자를 대체한다(replace)

```ruby
print "please enter a something: "
user_input = gets.chomp
user_input.downcase!

if user_input.include? "s"
  user_input.gsub!(/s/, "th")    # /s/ -> slash 사이에 있는 문자를 대체한다
end

```



3. while Loop

   while Loop. 즉, while 반복문은 조건이 참(true)일때 만 코드를 실행한다.

   ```ruby
   ex)

   counter = 1

   while counter < 10
     puts counter
     counter = counter + 1
   end

   #실행결과
   1
   2
   3
   4
   5
   6
   7
   8
   9

   ```

   위의 코드예제처럼 while 반복문은 조건이 참일 경우에만 코드를 실행한다.

   counter가 10이되는 순간 while 반복문의 조건인 counter < 10 에  의해 false가 되기 때문에 반복문은 실행되지 않고 종료된다.



4. until Loop
   until Loop는 while Loop와는 반대로 조건이 거짓(false)일 경우에만 코드를 실행한다.
   위의 코드와 같은 결과를 출력한다고 가정했을때의 코드를 작성한면 아래와 같다.

   ```ruby
   counter = 1

   until counter == 10
     puts counter
     counter = counter + 1
   end

   #실행결과
   1
   2
   3
   4
   5
   6
   7
   8
   9
   ```

   조건은 다양하게 설정할수 있겠지만 위와 같이 조건을 부여해보았다.
   위에 있는 while 반복문과 결과는 똑같지만 조건은 다르다. while은 참일 경우에만, until은 거짓일 경우에만 동작하기 때문이다.

5. for loop

   for loop는 다양한 조건으로 코드를 실행시킬수 있는 반복문이다.

   Ruby에서는 for 반복문의 사용방법이 독특하다.

   ```ruby
   ex)
   # 다음과 같이 for 반복문의 코드를 작성하면 출력되는 결과는 어떻게 나올까

   for number in 1...10
     print number
   end

   # 실행결과-1
   123456789

   # 1~10 까지의 숫자가 모두 출력되지 않고, 1~9까지의 숫자만 출력되었다
   # Ruby의 for 반복문에서는 숫자의 범위를 표현할때 " ... " <- 세개의 점을 사용하면 
   # 시작범위~마지막범위-1 까지를 range로 설정한다
   # 쉽게말하자면 1..10 이면 1부터 9, 5..9라면 5부터 9까지이다.

   # 표현한 모든 범위를 출력하거나 사용하고 싶다면 범위지정할때 
   # "..."이 아닌 ".." 를 사용하면 된다.

   for number in 1..10
     print number
   end

   # 실행결과-2
   12345678910
   ```

6. Loop Method

   loop method는 반복문이며, break if 를 사용하여 반복문의 종료조건을 설정해줄수 있다.

   ```ruby
   ex)

   # 다음과같은 코드를 실행하면 loop는 break if 조건에 도달할때까지 코드를 실행한다.
   i = 1

   loop do
     i+=1
     print "#{i}"
     break if i==4
   end

   # 실행결과-1
   234
   ```



7. next
   next는 loop의 진행과정에서 skip을 원하는 step의 조건을 설정하여 skip 할 수있게 해줍니다.

   ```ruby
   ex)

   for i in 1..10
      next if i%2 == 0
      print i
    end

   # 실행결과
   13579
   ```

   실행결과로 알수있듯이 next if의 조건으로 설정된 과정은 생략되고 반복문이 진행된 것을 알 수 있다.

   같은 결과를 위해 다른 반복문에도 next를 적용해보면 다음과 같다.

   ```ruby
   ex)
   i = 0

   loop do
     i += 1
     next if i % 2 == 0
   	break if i >10
     print "#{i}"
   end

   ```

   다양한 표현방식이 있겠지만 일단 위와 같은 코드로 작성해보았다.
   이밖에도 while ,until 과 같은 다른 반복문에도 응용이 가능하다.



8. Multiple Values = > Array

   Ruby에서 배열은 다음과 같이 선언한다.

   ```ruby
   array = [1,2,3,4,5]
   ```

   "arrray라는 이름으로 명명된 배열에 1,2,3,4,5 라는 다섯개의 수를 저장한다" 라고 말 할수 있다.



9. .each method

   each 메소드는 array와 같이 사용하면 매우 유용하게 사용할 수 있는 method이다.

   each 메소드를 사용하여 array 내의 원소 하나하나에 접근하여 작업을 수행할 수 있다.

   예를 들면,

   ```ruby 
   ex)

   #1
   array = [1,2,3,4,5]

   array.each do |x|
     x += 10
     print "#{x}"
   end

   #2
   array.each { |x|
     x += 10
   	print "#{x}"
    }

   # 실행결과
   11121314151112131415
   ```

   array = [1,2,3,4,5]라는 배열을 선언하고 #1,#2 두 가지의 방법으로 each 메소드를 사용해보았다.

   실행결과는 동일하지만 코드의 형태에서 차이가 있다. #1 코드에서는 { }(중괄호)가 아닌 do ... end 를 사용하였고, #2 코드에서는 { }(중괄호)를 사용하였다. 그리고 코드를 보면 알수 있듯이 x += 10 이라는 코드를 통해 array 의 원소마다 연산이 되어 결과값으로 출력된 것을 알수있다.

   ​

   10. .times method

     times 메소드는 매우 간단하게 표현할 수 있는 for 반복문이다.

     예를 들면,

     ```ruby
     ex)

     for i in 1..5
       puts "Hello"
     end

     5.times { puts "Hello" }ㅇ

     # 실행결과

     Hello
     Hello
     Hello
     ....
     Hello  # 총 10번의 Hello 출력확인
     ```

     위와 같이 for 반복문과 같은 내용을 .times 메소드를 사용하여 간단하게 표현할 수도 있다.

     ​

   11.  .split method

       Ruby에서는 built-in 메소드가 존재하는데 이것이 바로 split 메소드입니다.

       split 메소드를 사용하면 user가 원하는 조건에 따라 입력된 변수를 조각조각 나눌 수 있습니다

       예를 들면,

       ```ruby
       ex)

       puts "To write a text"
       words = gets.chomp.split(".")

       puts words

       # 입력
       a,b,c,d.e.f.g

       # 출력
       a,b,c,d
       e
       f
       g

       ```


   위와 같이 split 조건은 .(온점)으로 해두고 입력을 했을 때, 조건에 부합하는 곳은 분리하여 저장합니다.

   조건에 해당하지 않는 ,(콤마)는 인식되지않아 하나의 원소의 구성요소 취급됩니다.

   


   12. Array & Index

       배열에는 하나부터 여러개의 원소가 들어가게 됩니다.

       만약 배열 내의 원소 하나를 콕 집어서 얘기하고 싶으면 어떻게 얘기하는 것이 좋을까요.

       바로 원소마다 번호를 붙이는 것입니다.

       첫번째는 [0], 두번째는 [1] .... 이렇게 차례대로 번호를 붙여서 원소를 구분하는 것이지요.

       왜 첫번째 원소의 index가 0 인지 궁금하신분들은 ...

       ```ruby
       ex)

       array = [1,2,3,4,5]

       puts array[0]

       # 출력
       1
       ```

       이렇게 index를 지정하면 배열의 특정한 원소에 접근하는 것이 가능합니다.

       ​

       그리고 위와 같은 배열을 1차원 배열이라고 하는데요.

       1차원 배열이 있으니 2차원,3차원 배열도 존재하겠죠?

       Ruby에서 2차원배열을 선언하는 방법은

       ```ruby
       ex)

       2d_arrary = [[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]

       ```

       위와 같이 선언해주면 2차원 배열이 됩니다.

       2차원 배열은 흔히들 알고 계시는 행렬이라고 생각하시면 됩니다.

       ​

       ​

   13. Hash

       ​

       hash 선언 방법

       ​

       My_hash = Hash.new

       ​

       My_hash["A"] = 1

       My_hash["B"] = 2

       ​

       puts My_hash["A"] 

       ​

       OR

       ​

       My_hash = {

       ​	key1 => value1,
       ​	key2 => value2,
       ​	key3 => value3

       }

       hash는 key랑 value가 한쌍을 이룬다.

       key & value pair

       ```ruby
       secret_identities = {
           "The Batman" => "Bruce Wayne",
           "Superman" => "Clark Kent",
           "Wonder Woman" => "Diana Prince",
           "Freakazoid" => "Dexter Douglas"
       }
       ```



       secret_identities.each do |x,y|
         puts "#{x}: #{y}"
       end


​    
       # key값과  value값을 표현할때는 위와같이 표현이 가능하다.
       ```

------
------
# 

1. Method Syntax

   메소드를 사용하면 복잡한 코드나 기능을 손쉽게 사용할 수 있습니다.

   ```ruby
   def welcome
     puts "Welcome to Ruby!"
   end

   welcome

   #실행결과
   Welcome to Ruby!

   #가장 기본적인 method 선언과 사용방법입니다
   ```

   위와 같이 메소드를 선언하여 사용하면 메소드 내에 작성된 내용이 실행됩니다.

   ​

   ```ruby
   def array_of_10
     puts (1..10).to_a
   end

   array_of_10

   #실행결과
   [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

   #만약 to_a 가 아닌 to_s 메소드를 사용하면 실행결과는 다음과 같다
   1..10
   ```

   to_a, to_s 등과 같은 메소드별 차이와 사용법을 숙지해둔다면 유용하게 사용할 수 있다.



- The Combined Coparison Operator

  example1 <=> example2

  ​

  첫번째 operand인 example1와 두번째 operand인 example2가 같으면 return 0

  첫번째 operand가 두번째 operand보다 크면 return 1

  첫번째 operand가 두번째 operand보다 작으면 return -1

  ​



​	이것을 응용하여 오름차순,내림차순 정렬을 할 수 있다.	

```ruby
number = [ 3,5,6,7,1,2,35,67,9,10,12,15,4]

print number.sort! { |a,b| a<=>b }

print number.sort! { |a,b| b<=>a }

#실행결과
[1,2,3,4,5,6,7] [7,6,5,4,3,2,1]
```

​	









2. Hashes and Symbols
   hash는 key-value pair로 이루어진다.

   ```ruby
   breakfast = { 
     "bacon" => "tasty",
     "eggs" => "tasty",
     "oatmeal" => "healthy",
     "OJ" => "juicy"
   }
   ```

   위와 같이 key 값은 각각의 고유값(unique)으로 중복이 불가능하지만 value값은 중복이 가능하다.

   ​

   hash를 만드는 방법은 여러가지가 있지만 크게 두가지의 방법을 많이 사용한다

   ```ruby
   #1
   new_hash = { "one" => 1 }

   #2
   new_hash = Hash.new
   ```

   ​

   nil == false #false

   nil 의 의미는 "nothing at all"

   false 의 의미는 "not true"





**What's a Symbol?**

- 루비에서는 모든 것이 객체(object)로 존재한다. 그렇기 때문에 심볼도 객체이고 , 문자열도 객체다.

  하지만 심볼은 문자열이나 다른 것들과는 달리 변경이 불가능한 객체다. 값을 변경하는 것은 불가능하지만 

  ​값을 덮어씌우는것은 가능하다.

```ruby
"string" == :string  #false

#심볼과 문자열은 다르다.

a = :a_symbol

a = a + "example" # 값을 변경하는것은 불가능하다

a = :b_symbol # 하지만 값은 덮어씌우는 것은 가능하다

```



- 메모리 관점에서 심볼을 보면 다음과 같다

  ```ruby
  a = :test_symbol

  5.times do
    puts a.object_id
  end

  5.times do
    puts "test1_string".object_id
  end

  #실행결과
  1059228
  1059228
  1059228
  1059228
  1059228 # <- 심볼의 objetct_id 실행결과
  41801980
  41801940
  41801880
  41801840
  41801760 # <- string의 object_id 실행결과
  ```

  위와 같이 심볼의 경우에는 한번 heap 메모리상에 생성이 되면 동일한 객체에 대해서 재사용이 가능하다.

  하지만 문자열의 경우에는 값이 동일하더라도 서로 다른 메모리 공간을 차지한다는 것을 위의 예제로 알 수있다.

  ​

- .push / .to_sym / .intern / :symbol => "value"   ->  symbol: value / .select / .nil? / .delete

- ternary conditional expression   
  boolean ? do this if true : do this if false
  ​

- What is `||=` ?

  `a||=b` 

  위와 같은 표현은 `a || a = b` 와 같은 표현이다.

  ```
  a = nil
  b = 20
  a||=b
  puts a

  #실행결과
  20
  ```

  만약 a가 nil , false , undefined 상태가 아니라면 가능한 표현이다.

  하지만 아래의 코드처럼

  ```ruby
  a = nil
  a||= "string"    #=> a의 값은 string으로 대체된다.
  a||= "string2"   #=> a의 값은 string2로 대체되지 않고 원래의 값인 string으로 존재한다.
  ```

  더이상 nil,false, undefined 상태가 아니라면 값은 변경되지 않는다.

  ​

  ```ruby
  a||="string"
  a||="concat"
  puts a

  #실행결과
  string
  ```

  ​

  [`||=` 표현 설명]: http://www.rubyinside.com/what-rubys-double-pipe-or-equals-really-does-5488.html

  ​

- Short-Circuit Evaluation

  ```ruby 
  def a
    puts "A was evaluated!"
    return true
  end

  def b
    puts "B was also evaluated!"
    return true
  end

  puts a || b
  puts "------"
  puts a && b

  #실행결과

  A was evaluated!
  true
  -----
  A was evaluated!
  B was also evaluated!
  true
  ```

  실행결과가 위와 같이 나오는 이유는 다음과 같다.

  첫번째 a||b 를 살펴보면 정의된 a 는 true를 return하도록 되어있다.

  결과적으로 `||`  (OR) 논리 연산은 하나의 값만 true여도 결과값이 true이다.

  그렇기 때문에 `true ||` 와 같은 형태가 되기때문에 굳이 두번째 오퍼랜드인 b에 대한 논리연산이 필요없으므로 위와 같은 실행결과가 나타나는 것이다.

  ​

  `||`와는 달리 `&&`는 a 와 b , 두개의 오퍼랜드 모두를 판단해야 하기 때문에 결과적으로 `true && true`로 판단되어 위와 같은 실행결과가 나타나게 된다.



- .upto / .downto




- .respond_to?

  [respond_to? vs respond_to]: https://stackoverflow.com/questions/6849722/confused-about-respond-to-vs-respond-to

  ​

- `.push / <<`

  : `.push` 혹은 `<<` 를 사용한다면 배열에 원소를 추가하거나 문자열을 연결시켜줄 수 있다.

  ```ruby
  alphabet = ["a","b","c"]
  alphabet << 2 << "d"
  alphabet.push("e","f",3)
  puts alphabet.to_s

  #실행결과
  ["a","b","c",2,"d","e","f",3]

  string ="Hello"
  string << " World!"
  puts string

  #실행결과
  Hello World!
  ```

  이미 선언된 배열에 위와 같이 원소를 추가하거나 문자열의 연결(concatation)이 가능한 것을 확인 할 수있다.

  하지만 push를 사용하여 배열이 아닌 문자열이 저장된 변수에 문자열을 연결 시키는 행위는 불가능하다.

  예를들어 `string = "a"` 와 같이 문자열 변수에 `string.push("b")` 를 사용하는 행위는 불가능하다.
   `.push` 메소드가 배열에 관한 메소드이기 때문에 위와 같은 예가 발생하는 것이다.

  ​

- `#{variable}`

  ​

- Ternary Operator   (` condition ? true : false `) => 삼항조건연산자

  ​

- `case / when / then`

  ​

- Single Line Refactoring

  ​

- **Blocks,Procs And Lambdas**
  Ruby에서 Block을 형성하는 법은 다음과 같이 두 가지가 있다.

  ```ruby
  #1
  [1,2,3].each do |num|
    puts num
  end

  #2
  [1,2,3].each { |num
    puts num }
  ```

  `#1` 과 `#2` 둘 다 같은 실행결과를 나타내게 되지만 표현방식이 다르다. `#1`은 `do ... end`를 사용하여 block

  을 형성하고, `#2`는 `{ ... }`를 사용하여 block을 형성한다. 

  ​

  - **Collect Method**
    Collect 메소드는 기존 배열의 original 원소의 값을 변경하지 않고 copy 해와서 사용하기 때문에 original 원소는 아무런 영향을 받지 않습니다. 하지만 collect! 를 사용한다면 기존 배열의 원소의 값도 변경됩니다.

    `.collect` and `.map` 

    ​

  - **Proc Method**

    Proc는 Procedure의 줄임말로 어떠한 처리과정(절차)를 담고 있다는 의미로 사용된다. Proc.new 메소드를 통해서 객체를 생성하는 것도 가능하다. 

    ```ruby
    fibs = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55]

    # Add your code below!

    double = Proc.new {|x| x * 2}

    doubled_fibs = fibs.collect(&double)

    puts doubled_fibs
    ```

    ```ruby
    multiples_of_3 = Proc.new do |n|
      n % 3 == 0
    end

    print (1..100).to_a.select(&multiples_of_3)
    ```

    ```ruby
    floats = [1.2, 3.45, 0.91, 7.727, 11.42, 482.911]
    round_down = Proc.new { |n| n.floor }
    ints = floats.collect(&round_down)

    print ints

    #실행결과
    [1,3,0,7,11,482]
    ```

    proc는 객체의 모든 기능과 힘을 가지고 있지만 , block 은 그렇지 않다.
    block과 달리 proc는 다시 작성하지 않고 계속 호출 가능. 이렇게 하면 특정 코드를 실행할 때마다 블록의 내용을 다시 입력할 필요가 없음.

    ​

  - **code block**

    코드 블록은 `{ }`중괄호 혹은 `do...end`로 묶여있는 코드를 뜻한다.

    ```ruby
    #  block1
    { puts "Hello World!" }

    #  block2
    do
      print "1"
      print "2"
    end
    ```

    - 중괄호 `{ }` 는 `do...end`보다 높은 우선순위를 갖는다.
    - 한 줄의 블록에는 중괄호 `{ }`를 사용하고, 여러 줄의 블록에는 `do...end`를 사용한다.

    ​

    `yield`를 사용하여 코드 블록을 여러번 실행할 수 있다.

    `yiedl`는 현재 위치의 메소드와 결합되어 있는 코드 블록을 불러오는 메소드 호출이라 생각해도 된다.

    ```ruby
    def call
      puts "first"
      yield
      yield
      puts "second"
      yield
    end

    call { puts "start" }

    #  실행결과
    first
    start
    start
    second
    start
    ```

- **call method**

  ​

- **Lambda**
  `lambda { |param| block }` 

  ​

  ​

  [루비와 익명 함수 - 블록 , proc ,람다함수]: http://blog.nacyot.com/articles/2015-12-07-ruby-proc-and-lambda/​

- **Class**

  - 객체 변수 => @로 선언
  - 클래스 변수 => @@로 선언
  - 메소드 혹은 클래스에서 사용가능한 전역변수 => $로 선언



- **Inheritance(상속)**

  - 상속은 객체지향언어를 사용하면서 흔히 접할 수 있는 개념이다.
    상위 클래스와 하위클래스가 존재하며
    `class Cat < Animal` 과 같이 선언을 하게되면 Animal이 상위클래스가 되고, Cat이 하위클래스가 된다.

    상위클래스의 속성과 함수를 하위클래스는 별도의 선언 없이 사용이 가능하며, 사용의 제한 또한 가능하다.

    ​	



- **super**
  : super를 매개변수 없이 호출하면, 루비는 현재 객체의 부모에게 메세지를 보내서 super를 호출한 메소드와 같은 이름의 메소드를 호출하도록 요청한다.







```ruby
class Machine
  @@users = {}
  
  def initialize(username, password)
    @username = username
    @password = password
    @@users[username] = password
    @files = {}
  end
  
  def create(filename)
    time = Time.now
    @files[filename] = time
    puts "#{filename} was created by #{@username} at #{time}."
  end
  
  def Machine.get_users
    @@users
  end
end

my_machine = Machine.new("eric", 01234)
your_machine = Machine.new("you", 56789)

my_machine.create("groceries.txt")
your_machine.create("todo.txt")

puts "Users: #{Machine.get_users}"

######################################
#출력

groceries.txt was created by eric at 2018-03-24 11:31:27 +0000.
todo.txt was created by you at 2018-03-24 11:31:27 +0000.
Users: {"eric"=>668, "you"=>56789}
```







- Methods are public by default in Ruby
  : 루비에서 메소드는 **public**이 기본값이다.
  그렇기 때문에 **private**메소드로 사용하고 싶으면 별도로 지정해주어야 한다.





- `attr_reader / attr_writer` and `attr_accessor`
  : 접근자



- `module`
  : 모듈을 선언하는 방식은 lowercase_with_underscores 를 사용하는 것보다 CapitalizedCamelCase 방식으로 사용하는 것이 낫다.

  ```ruby
  #  case1

  module module_name_1

  end

  #  case2

  module ModuleName

  end
  ```

  - scope resolution operator
  - require
  - Include

- class & module == **mixin**



- extend