

# Benchmark set for Protein Chain Lattice Fitting (PCLF) Problem


This is the benchmark set of high resolution protein structures used for benchmarking tools solving the Protein Chain Lattice Fitting (PCLF) problem (see publication below).
The test set was taken from the PISCES web server (Wang and Dunbrack, 2005). We enforced 40% sequence identity cutoff, chain length 50–300, R-factor <= 0.3, and resolution <= 1.5 A to derive a high-quality set of proteins to model. Given our requirement for side chains, C_alpha-only chains were ignored. The resulting benchmark set contains 1198 proteins exhibiting a mean length of 160.

-    [List of PDB entries used (.txt)](latFit-PDB-IDs.txt)
-    [Collection of PDB files with backbone-only coordinates fitted (.tar.gz)](latFit-PDB.bb-files.tar.gz)
-    [Collection of PDB files including side chain coordinates fitted (.tar.gz)](latFit-PDB.sc-files.tar.gz)

## Supplementary data for publication

- Martin Mann, Daniel Maticzka, Rhodri Saunders, and Rolf Backofen.
	[**Classifying protein-like sequences in arbitrary lattice protein models using LatPack**](https://doi.org/10.2976/1.3027681).
	In HFSP Journal, 2 no. 6 pp. 396, 2008.
	Special issue on protein folding: experimental and theoretical approaches.
	[DOI:10.2976/1.3027681](https://doi.org/10.2976/1.3027681).
