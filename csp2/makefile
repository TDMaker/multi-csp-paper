store: 
	gcc store.c ../utils/randys.c
challenge:
	gcc challenge.c ../utils/randys.c -lgmp
proof_gen2:
	gcc proof_gen2.c ../utils/randys.c ../utils/sha256.c -lgmp
proof_verify2:
	gcc proof_verify2.c ../utils/randys.c ../utils/sha256.c -lgmp
clean:
	rm a.out
	rm ../swap/csp1/blocks/*
	rm ../swap/csp2/blocks/*
	rm ../swap/*.mp3.*