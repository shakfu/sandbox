[t1][0][0] -> (0.0168,  Rainy) (0.01680, Rainy)
[t1][0][1] -> (0.03840, Sunny) (0.03840, Sunny)
[t1][1][0] -> (0.00534, Rainy) (0.00540, Rainy)
[t1][1][1] -> (0.04320, Sunny) (0.04320, Sunny)
[t2][0][0] -> (0.01344, Rainy) (0.01344, Rainy)
[t2][0][1] =* (0.00864, Rainy) (0.01344, Rainy) # <= NOT CONSISTENT
[t2][1][0] -> (0.00115, Rainy) (0.00115, Rainy)
[t2][1][1] -> (0.00259, Sunny) (0.00259, Sunny)

[t1][0][0] -> (0.01680, Rainy)
[t1][0][1] -> (0.03840, Sunny)
[t1][1][0] -> (0.00540, Rainy)
[t1][1][1] -> (0.04320, Sunny)
[t2][0][0] -> (0.01344, Rainy)
[t2][0][1] =* (0.01344, Rainy)
[t2][1][0] -> (0.00115, Rainy)
[t2][1][1] -> (0.00259, Sunny)

          0       1       2
Rainy: 0.06000 0.03840 0.00864
Sunny: 0.24000 0.04320 0.00259

(0.00864, ['Sunny', 'Rainy', 'Rainy'])