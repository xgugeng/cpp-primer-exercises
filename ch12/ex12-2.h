#include <memory>
#include <vector>
#include <string>
#include <initializer_list>

using std::shared_ptr;
using std::vector;
using std::string;
using std::initializer_list;
using std::make_shared;

class StrBlob
{
public:
    using size_type = vector<string>::size_type;

    StrBlob():data(make_shared<vector<string>>()) {}
    StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)) {}

    size_type size() const { return data->size(); }

    void push_back(const string &s) { data->push_back(s); }
    void pop_back()
    {
        check(0, "posh_back on empty StrBlob");
        data->pop_back();
    }

    string& front () const
    {
        check(0, "front on emptry StrBlob");
        return data->front();
    }

    string& back () const
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }

private:
    shared_ptr<vector<string>> data;

    void check(size_type l, const string &msg) const
    {
        if (l >= data->size())
        {
            throw std::out_of_range(msg);
        }
    }
};
