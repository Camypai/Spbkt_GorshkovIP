#pragma once

#include<vector>
#include<cstring>

template <class T>
ref class Array
	{
	public:

		Array<T>^ operator-(Array<T> second)
		{
			Array<T> res;
			res = this;
			if (this->n == second.n) {
				for (int i = 0; i < this->n; i++)
				{
					res.mas[i] -= second.getElement(i);
				}
			}
			return res;
		}

		Array<T>^ operator= (Array<T>^ second) {
			if (this->n == second.n) {
				for (int i = 0; i < this.n; i++)
				{
					this->mas[i] = second->getElement(i);
				}
			}
			return this;
		}


		Array<T>^ operator- (T n) {
			for (int i = 0; i < n; i++)
			{
				mas[i] -= n;
			}
			return this;
		}

		Array<T> operator[] (int i) {
			if (i < 0 || i > n) {
				return this;
			}
		}

		void addNumber(T a) {
			T* buf_mas = new T[n];
			for (int i = 0; i < n; i++)
			{
				buf_mas[i] = mas[i];
			}
			mas = new T[n + 1];
			for (int i = 0; i < n; i++)
			{
				mas[i] = buf_mas[i];
			}
			mas[n] = a;
			n++;
		}

		T getElement(int i) {
			return this->mas[i];
		}

		int getSize() {
			return n;
		}

	private:
		T* mas = new T[0];
		int n=0;
	};