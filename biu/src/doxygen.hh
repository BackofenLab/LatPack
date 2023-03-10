
/**
 * \mainpage BIU - Bioinformatic Utility Library
 *
 * <center> BIU - 2.3.8 </center>
 *
 * This document provides reference information about the 
 * <A HREF="http://www.bioinf.uni-freiburg.de/SW/BIU/">Bioinformatic Utility Library</A>.
 * 
 * \section SecGoals The goal
 * 
 * This C++ programming library provides a classes and functions often used in
 * the bioinformatics context of our group. It collects data structures and 
 * class hierarchies for biomolecule modelling and general usefull functionalities
 * as program parameter parsing, string conversions, etc.
 * 
 * \section SecFeatures Features
 *
 *
 * \subsection SubSecStrings String operations
 *
 * <DIV class="subsection">
 * The C++ standard has only a few predefined string operations for immediate
 * calling. We provide a set of wrapper functions around STL functionalities to 
 * ease their usage.
 * </DIV>
 * 
 * 
 * \subsection SubSecOptionParsing Program parameter parsing
 *
 * <DIV class="subsection">
 * Type safe parameter parsing, parameter information generation and error 
 * message generation is an anoying part of developing new command line tools.
 * The provided option parser will help to focus on the method than on the
 * mentioned tasks.
 *
 * </DIV>
 *
 *
 * \subsection SubSecRNG Random number generation
 * 
 * <DIV class="subsection">
 * The generation of (pseudo) random numbers is an important part for 
 * reproducible simulations and experiments. The provided generator facility
 * allows a central and flexible application of different generators.
 *
 * The following random number generators are provided:
 * - a wrapper around ISO C random number functions (CPU dependent results)
 * - linear congruent generator
 * - a quasi random number generator wrapping the sobol sequence generator from
 *   the GNU Scientific Library
 *
 * </DIV>
 * 
 * 
 * \subsection SubSecLatProt Lattice Proteins
 *  
 * <DIV class="subsection">
 * Currently we provide representations for lattice proteins with contact based 
 * energy functions on arbitrary lattices.
 * 
 * Currently the following lattice models inclusive automorphisms etc are provided:
 * - 2D square
 * - 3D cubic
 * - 3D face centered cubic (FCC)
 *
 * The energy functions can be defined on an arbitrary monomer alphabet. We 
 * support different distance based energy functions:
 * - contact based (only in the lattice neighbored positions contribute)
 * - distance interval based (different energy tables for discrete distance
 *   intervals) 
 *  
 * For structural neighbor generation move sets are provided:
 * - pull moves (ergodic)
 * - pivot moves (ergodic)
 *
 * </DIV>
 * 
 * 
 * \section SecApp Appendix
 *
 * Additionally, the documentation also features the following parts:
 *  - \ref PageInstallation
 *  - \ref PageTests
 *
 * The following lists and indices are available
 *  - <a class="el" href="annotated.html">List of all classes including brief documentation</a>
 *  - <a class="el" href="namespaces.html">List of all namespaces including brief documentation</a>
 *  - <a class="el" href="files.html">List of all files</a>
 *  - <a class="el" href="hierarchy.html">Class hierarchy</a>
 *  - <a class="el" href="classes.html">Alphabetical class index</a>
 *  - <a class="el" href="namespacemembers.html">Namespace members</a>
 *  - <a class="el" href="functions.html">Class members</a>
 *  - <a class="el" href="globals.html">File members</a>
 */



/**
 * \page PageInstallation Installation
 * 
 * Follow this steps to create a local version of the BIU:
 * 
 * - download and unzip the 
 *   <A HREF="http://www.bioinf.uni-freiburg.de/SW/BIU/"> BIU source package </A> 
 *   distribution
 * 
 * - run "./configure --help" to get an overview of further possible parameters
 * - run "./configure" with your desired parameters to generate the Makefiles
 * - "make" to generate the library
 * 
 * - "make test" to test if everything works fine
 * 
 * - "make install" to install the headers and library to the given directory
 * 
 * - "make doc" to generate the html documentation (if selected during the
 *   configure call)
 * - "make doxygen-doc" to generate the whole documentation
 *
 * See the file INSTALL in the library root path for further informations.
 * 
 */
 
/**
 * \page PageTests Test cases and usage examples
 * 
 * To check if the BIU library does function as expected a test case was 
 * implemented for each non-abstracted class. 
 * 
 * The source code can be used as an example for the usage of the BIU-classes.
 * 
 * All files can be found in a subfolder named "tests" in the BIU root
 * directory. They are named in the format "testCLASSNAME.cc".
 * 
 */

