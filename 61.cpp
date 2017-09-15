#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	
		
			long k, j, number;
				string input;
					j = 0;
						number = 0;
							
								cout << "Enter a number: ";
									cin >> input;
										
											for (long i = input.length() - 1; i >= 0; i--) {
													k = pow(2, j);
															if (input[i] == '1') {
																		number += k;
																				}
																						j++;
																							}
																								
																									cout << number;
																										cout << endl;
																											
																												return 0;
																												}
