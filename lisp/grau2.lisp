(defun grau2 (a b c)
  ;; b^2 - 4*a*c
  (setq delta (- (* b b) (* 4 a c)))
  ;;  (format t "delta = ~S~%" delta)
  (if (= delta 0)
      (- (/ b (* 2 a)))
    (progn
      (setq x1 (/ (- (sqrt delta) b) (* a 2) ) )
      (setq x2 (/ (- (- b) (sqrt delta)) (* a 2) ) )
      (list x1 x2)
      )    
    )
  )
