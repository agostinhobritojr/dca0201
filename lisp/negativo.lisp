(setq entrada (open "eye.ppm")) ;; abre para LEITURA
(setq saida (open "eye-neg.ppm" :direction :output))
;; le os caracteres P3
(setq alo (read entrada))
(format t "~S~%" alo)

;; le o comentario
(setq alo (read-line entrada))
(format t "~S~%" alo)

(setq largura (read entrada))
(setq altura (read entrada))
(format t "largura: ~S~%altura: ~S~%"
	largura altura)
;; le o 255 (lixo)
(read entrada)

;; escreve o cabecalho do arquivo de saida
(format saida "P3~%#fui eu qui fis~%~S ~S~%255~%"
	largura altura)

;; itera sobre toda a imagem armazenada no arquivo
(loop for i from 1 to altura do
      (loop for j from 1 to largura do
	    ;; le a cor de um pixel
	    (setq red (read entrada))
	    (setq gre (read entrada))
	    (setq blu (read entrada))
	    (format saida "~S~%~S~%~S~%"
		    (- 255 red)
		    (- 255 gre)
		    (- 255 blu))
	    )
      )

;; fecha o arquivo de entrada
(close entrada)
;; fecha o arquivo de saida
(close saida)
