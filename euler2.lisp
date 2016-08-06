;;;; Project Euler No 2

;;; fibonacci generator
(defun fib-gen (n)
  (if (= n 1)
      1
    (if (= n 2) 
	2
      (+ (fib-gen (- n 1))
	 (fib-gen (- n 2))))))

;; compute Phi
(defvar *phi* (/ (+ (sqrt 5)
		    1)
		 2))
;; compute phi = 1/Phi
(defvar *phi2* (/ (- 1
		     (sqrt 5))
		  2))

;; now function to generate fibonacci in constant time
(defun fib-gen-2 (n)
  (round (/ (- (expt *phi* n)
	       (expt *phi2* n))
	    (sqrt 5))))

;; function to compute fib's contibution
;; 0 if odd
;; itself if even
(defun get-fib-contrib (n)
  (if (= (mod (fib-gen n)
	      2)
	 0)
      (fib-gen n)
      0))

;;(get-fib-contrib 9)

(defun sum-even-fib (n)
  (if (> (fib-gen n)
	 4000000)
      0
      (+ (get-fib-contrib n)
	 (sum-even-fib (+ 1 
			  n)))))

;;(fib-gen 40)
(print (sum-even-fib 1))

