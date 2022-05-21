# multi-csp-paper

### Algorithm
- Data owner splits a certain file to $n$ blocks.
- DO sends the file blocks to each CSP.
- Each CSP sends back the corresponding hash of the file to ensure the file's intactness.
- Assuming CSP 2 launchs a challenge to CSP 1.
- CSP 2 chooses-then-sends a random number \(r_2\) to CSP 1, for generating the index set $I$, and the coefficient set $Q$.
- CSP 1 receives $r_2$, then chooses its own random number $r_1$.
- CSP 1 combines the two numbers as $r=r_1+r_2$, then calculates $I=\lbrace\mu_i\rbrace\gets\pi(r)$ and $Q=\lbrace\nu_i\rbrace\gets\phi(r)$, then generates the integrity proof $P_1=\sum_{i\in[1,c],\mu_i\in I,v_i\in Q}b_{\mu_i}\times v_i\bmod r$.
- CSP 1 sends $h_1=H(P_1\parallel r_1)$ and $r_1$ to CSP 2.
- CSP 2 computes its own proof $P_2$ with $r_1,r_2$, and generates-then-sends $h_2=H(P_2\parallel r_2)$ to CSP 1.
- After a moment, namely coming into the second phase in **Two-phase Commit**.
- CSP 1 sends $P_1$ to CSP 2, meanwhile, CSP 2 sends $P_2$ to CSP 1.
- CSP 1 verifies whether $h_2=H(P_2\parallel r_2)$ and $P_1=P_2$ .
- CSP 2 verifies whether $h_1=H(P_1\parallel r_1)$ and $P_1=P_2$.

$$
x+y=z
$$
