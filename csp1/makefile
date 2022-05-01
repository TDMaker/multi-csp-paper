store: 
	gcc store.c ../utils/randys.c
proof_gen1:
	gcc proof_gen1.c ../utils/randys.c ../utils/sha256.c -lgmp
proof_verify1:
	gcc proof_verify1.c ../utils/randys.c ../utils/sha256.c -lgmp
clean:
	rm a.out
	rm ../swap/csp1/blocks/*
	rm ../swap/csp2/blocks/*
	rm ../swap/*.mp3.*