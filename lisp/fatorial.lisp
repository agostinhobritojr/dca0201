;; (load "fatorial.lisp")
;; 
(defun fat (x)
  (if (> x 0)
      ;; calcula o fatorial
      (* x (fat (- x 1)))
      1
    )
  )