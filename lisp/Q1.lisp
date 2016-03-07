(setq entrada (open "turma.ppm"))
(read-line entrada)
(read-line entrada)
(setq largura (read entrada))
(setq altura (read entrada))
(read-line entrada)
(format t "~a ~a~%" largura altura)

(with-open-file
 (out "eye.html" :direction :output)
 (format out "<html>~%")
 (format out "<TABLE BORDER=0 CELLPADDING=0 CELLSPACING=0>~%")
 (loop for i from 1 to altura do
       (format out "<tr>")
       (loop for j from 1 to largura do
      (if (eq 0 (mod j 2))
	  (format out "<td bgcolor= #~(~2,'0x~)~(~2,'0x~)~(~2,'0x~)>1</td>"
		  (read entrada) (read entrada) (read entrada))
	(format out "<td bgcolor=#~(~2,'0x~)~(~2,'0x~)~(~2,'0x~)>0</td>"
		(read entrada) (read entrada) (read entrada)))
)
       (format out "</tr>~%"))
 (format out "</table>~%</html>"))

(close entrada)
