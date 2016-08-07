; Lisp code to solve project euler problem No. 1
; This is my first lisp code :-P
;

(defun modn (x n)
  ( if ( = 0 ( mod x n ) )
       x
       0 ) )

( defun modmorn (x m n)
  ( - ( + (modn x m) (modn x n) )
      ( modn x (* m n) ))) 

( defun main1 (x)
  ( if ( = x 1 )
       1
       ( + (modmorn x 3 5) 
           ( main1 (- x 1) ))))

( main1 999 )
