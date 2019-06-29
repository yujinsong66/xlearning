#lang racket
(define (exercise-1-12 m n)
  (cond ((= m 0) 1)
        ((= m n) 1)
        ((= n 0) 1)
        (else (+ (exercise-1-12 (- m 1) (- n 1))
                 (exercise-1-12 (- m 1) n)))))
(exercise-1-12 4 3)