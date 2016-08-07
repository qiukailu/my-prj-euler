;
(defun sqrt-int (n i)
  (if (< n
	 (* i i))
      t
      (if (= 0 (mod n i))
	  nil
	  (sqrt-int n (+ 1 i)))))
;
(defun is-prime (n)
  (sqrt-int n 2))
;
(is-prime 21)
;
(defun prime-divider (n i)
  (if (< i 10000)
      (prime-divider n (+ 1 i)))
  (if (and (is-prime i)
	   (= 0 (mod n i)))
      (format t "~A~%" i)))
;
(prime-divider 600851475143 2)
